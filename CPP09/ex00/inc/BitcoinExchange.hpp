/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:37:00 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/05 14:48:08 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <sstream>
# include <math.h>
# include <fstream>
# include <unistd.h>

struct s_info
{
	std::string	date;
	int			value;
};


class CouldNotOpen: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "could not open file.";
	}
};

class InvalidDate: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Invalid date format.";
	}
};

class notPositve: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Not a postive number.";
	}
};

class InvalidValue: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Invalid value.";
	}
};

class BitcoinExchange
{
private:
	std::ifstream					_inStream;
	bool							_isFinish;
	std::map<std::string, int>		_container;
public:
	BitcoinExchange(int argc, char **argv);

	~BitcoinExchange();

	s_info		readLine(void);
	std::string	checkDate(std::string date);
	int			checkValue(std::string value);
	void		fillContainer();
};

void		BitcoinExchange::fillContainer()
{
	s_info	tmp;
	while (!_isFinish)
	{
		tmp = readLine();
		if (_isFinish)
			break;
		_container[tmp.date] = tmp.value;
		std::cout << tmp.date << " => " << tmp.value << " = " << "ok" << std::endl;
	}
	_inStream.close();
}

int	BitcoinExchange::checkValue(std::string value)
{
	float	price = strtod(value.c_str(), NULL);
	if (fmod(price, 1) != 0)
		throw (InvalidValue());
	else if (price < 0)
		throw (notPositve());
	else if (price > 10000)
		throw (InvalidValue());
	return ((int)price);
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

s_info	BitcoinExchange::readLine(void)
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
	return (result);
}

BitcoinExchange::BitcoinExchange(int argc, char **argv)
{
	if (argc <= 1 || argc > 2)
		throw (CouldNotOpen());
	_inStream.open(argv[1], std::ifstream::in);
	if (!_inStream)
		throw (CouldNotOpen());
	_isFinish = false;
	fillContainer();
}

BitcoinExchange::~BitcoinExchange()
{
	_inStream.close();
}


#endif
