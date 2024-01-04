/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:37:00 by cpapot            #+#    #+#             */
/*   Updated: 2024/01/04 16:07:28 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>

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
	std::ifstream	_inStream;
	bool			_isFinish;
public:
	BitcoinExchange(int argc, char **argv);

	~BitcoinExchange();

	void	readLine(void);
	bool	checkDate(std::string date);
	bool	checkValue(std::string value);
};

bool	BitcoinExchange::checkValue(std::string value)
{
	float	price = strtod(value.c_str(), NULL);
	if (price < 0 || price > 1000)
		return (false);
	return (true);
}

bool	BitcoinExchange::checkDate(std::string date)
{
	std::string number = "0123456789";

	for (int i = 0; i != date.length(); i++)
	{
		for (int y = 0; y != number.length(); y++)
		{
			if (date[i] == number[y] || date[i] == '-')
				break;
			if (y == number.length() - 1)
				return (false);
		}
	}
	int year = stoi(date.substr(0, 4), NULL, 10);
	int month = stoi(date.substr(5, 2), NULL, 10);
	int day = stoi(date.substr(8, 2), NULL, 10);
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
		return (false);
	return (true);
}

void	BitcoinExchange::readLine(void)
{
	std::string	date;
	std::string	value;

	if (!getline(_inStream, date, '|'))
		_isFinish = true;
	if (!checkDate(date))
		throw (InvalidDate());
	if (!getline(_inStream, value))
		_isFinish = true;
	if (!checkValue(value))
		throw (InvalidValue());
}

BitcoinExchange::BitcoinExchange(int argc, char **argv)
{
	if (argc <= 1 || argc > 2)
		throw (CouldNotOpen());
	_inStream.open(argv[1], std::ifstream::in);
	if (!_inStream)
		throw (CouldNotOpen());
	_isFinish = false;
}

BitcoinExchange::~BitcoinExchange()
{
	_inStream.close();
}


#endif
