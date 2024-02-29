/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:36:50 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/29 04:49:30 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void		BitcoinExchange::printData()
{
	for (std::map<std::string, float>::iterator i = _container.begin(); _container.end() != i; i++)
	{
		std::cout << i->first << " _ _ " << i->second << std::endl;
	}
}

void		BitcoinExchange::fillContainer()
{
	s_info	tmp;
	while (!_isFinish)
	{
		tmp = readLineData();
		if (_isFinish)
			break;
		_container[tmp.date] = tmp.value;
	}
	std::cout << "container filled" << std::endl;
	_inStream.close();
}

float	BitcoinExchange::checkValue(std::string value)
{
	float	price = std::atof( value.c_str( ) );
	if (price < 0)
		throw (notPositve());
	else if (price > 1000)
		throw (InvalidValue());
	return (price);
}

std::string	BitcoinExchange::checkDate(std::string date)
{
	std::string number = "0123456789";

	for (size_t i = 0; i != date.length(); i++)
	{
		for (size_t y = 0; y != number.length(); y++)
		{
			if (date[i] == number[y] || date[i] == '-' || date[i] == ' ')
				break;
			if (y == number.length() - 1)
				throw (InvalidDate());
		}
	}
	int year = strtod(date.substr(0, 4).c_str(), NULL);
	int month = strtod(date.substr(5, 2).c_str(), NULL);
	int day = strtod(date.substr(8, 2).c_str(), NULL);
	int monthSize[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				monthSize[2] = 29;
		}
		else
			monthSize[2] = 29;
	}

	if (month == 0 || month > 12 || day > monthSize[month] || day == 0)
		throw (InvalidDate());
	std::stringstream	result;
	result << year << "-" << month << "-" << day;
	return (result.str());
}

s_info	BitcoinExchange::readLineData(void)
{
	s_info		result;
	static bool skipFirstLine = false;
	std::string	date;
	std::string	value;


	if (!skipFirstLine)
	{
		getline(_inStream, date);
		skipFirstLine = true;
	}
	if (!getline(_inStream, date, ','))
		_isFinish = true;
	else
		result.date = checkDate(date);
	if (!getline(_inStream, value))
		_isFinish = true;
	else
		result.value = std::atof( value.c_str( ) );
	return (result);
}

s_info		BitcoinExchange::readLineInput()
{
	s_info		result;
	std::string	date;
	std::string	value;

	if (!getline(_inStream, date, '|'))
		_isFinish = true;
	else
		result.date = checkDate(date);
	if (!getline(_inStream, value))
		_isFinish = true;
	else
		result.value = checkValue(value);
	return result;
}

BitcoinExchange::BitcoinExchange(std::string file)
{
	_inStream.open(file.c_str(), std::ifstream::in);
	if (!_inStream)
		throw (CouldNotOpen());
	_isFinish = false;
	fillContainer();
}

void		BitcoinExchange::printInfo(s_info input)
{
	std::map<std::string, float>::iterator	ite = _container.upper_bound(input.date);
	if (ite != _container.end())
	{
		if (ite != _container.begin())
			ite--;
		std::cout << input.date << " => " << input.value << " = " << input.value * ite->second << std::endl;

	}
}

void		BitcoinExchange::checkInput(int argc, char **argv)
{
	if (argc <= 1 || argc > 2)
		throw (CouldNotOpen());
	_inStream.open(argv[1], std::ifstream::in);
	if (!_inStream)
		throw (CouldNotOpen());
	_isFinish = false;
	s_info value;
	while (true)
	{
		value = readLineInput();
		if (_isFinish == true)
			return ;
		printInfo(value);
	}
	_inStream.close();
}

BitcoinExchange const		&BitcoinExchange::operator=(const BitcoinExchange &src)
{
	_container = src._container;
	_isFinish = true;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	_container = cpy._container;
	_isFinish = true;
}

BitcoinExchange::~BitcoinExchange()
{
}
