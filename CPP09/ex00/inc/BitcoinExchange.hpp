/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:37:00 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/29 04:42:16 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <map>
# include <algorithm>

struct s_info
{
	std::string	date;
	float		value;
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
	std::map<std::string, float>	_container;
public:
	BitcoinExchange(std::string file);
	BitcoinExchange const		&operator=(const BitcoinExchange &src);
	BitcoinExchange(const BitcoinExchange &cpy);
	~BitcoinExchange();

	void		checkInput(int argc, char **argv);
	s_info		readLineData(void);
	std::string	checkDate(std::string date);
	float		checkValue(std::string value);
	void		fillContainer();
	void		printData();
	s_info		readLineInput();
	void		printInfo(s_info input);
};

#endif
