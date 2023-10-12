/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StockType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:52:28 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/12 12:49:12 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StockType.hpp"

std::string		StockType::getToken(void)
{
	return (_token);
}


void	StockType::setToken(std::string token)
{
	_token = token;
}

long		StockType::getLong()
{
	switch (_type)
	{
	case 1:
		return static_cast<long>(_charType);

	case 2:
		return static_cast<long>(_longType);

	case 3:
		return static_cast<long>(_doubleType);

	case 4:
		return static_cast<long>(_doubleType);

	default:
		return 0;
	}
}

double		StockType::getDouble()
{
	switch (_type)
	{
	case 1:
		return static_cast<double>(_charType);

	case 2:
		return static_cast<double>(_longType);

	case 3:
		return static_cast<double>(_doubleType);

	case 4:
		return _doubleType;

	default:
		return 0;
	}
}

float		StockType::getFloat()
{
	switch (_type)
	{
	case 1:
		return static_cast<float>(_charType);

	case 2:
		return static_cast<float>(_longType);

	case 3:
		return static_cast<float>(_doubleType);

	case 4:
		return static_cast<float>(_doubleType);

	default:
		return 0;
	}
}

int		StockType::getInt()
{
	switch (_type)
	{
	case 1:
		return static_cast<int>(_charType);

	case 2:
		return static_cast<int>(_longType);

	case 3:
		return static_cast<int>(_doubleType);

	case 4:
		return static_cast<int>(_doubleType);

	default:
		return 0;
	}
}

char		StockType::getChar()
{
	switch (_type)
	{
	case 1:
		return _charType;

	case 2:
		return static_cast<char>(_longType);

	case 3:
		return static_cast<char>(_doubleType);

	case 4:
		return static_cast<char>(_doubleType);

	default:
		return 0;
	}
}

void	StockType::operator=(const double &src)
{
	_doubleType = src;
}

void	StockType::operator=(const char &src)
{
	_charType = src;
}

void	StockType::operator=(const long &src)
{
	_intType = static_cast<int>(src);
	_longType = src;
}

void	StockType::operator=(const int &src)
{
	_intType = src;
}

StockType::StockType(int type)
{
	_type = type;
}

StockType::~StockType()
{
}
