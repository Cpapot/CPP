/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StockType.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:32:59 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/11 16:44:27 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

enum
{
	CHAR = 1,
	INT,
	FLOAT,
	DOUBLE
};

class StockType
{
private:
	int			_type;
	int			_intType;
	char		_charType;
	double		_doubleType;
	long		_longType;
	std::string	_token;
public:
	StockType(int);
	~StockType();

	void			operator=(const int &src);
	void			operator=(const char &src);
	void			operator=(const float &src);
	void			operator=(const double &src);
	void			operator=(const long &src);

	char			getChar(void);
	int				getInt(void);
	float			getFloat(void);
	double			getDouble(void);
	long			getLong(void);

	void			setToken(std::string);
	std::string		getToken(void);
};
