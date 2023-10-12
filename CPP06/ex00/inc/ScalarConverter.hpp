/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:40:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/12 12:44:55 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <limits>
#include <iomanip>
#include "StockType.hpp"
#include "ScalarConverter.h"
#include <cstdlib>

typedef struct s_convert
{
	int		intValue;
	double	flvalue;
}	t_convert;

class ScalarConverter
{
public:
	static void		convert(std::string token);
	static int		find_type(std::string token);
	static char		convertChar(std::string token);
	static long		convertInt(std::string token);
	static double	convertDouble(std::string token);
	static double	convertFloat(std::string token);
	static void		printValue(StockType &data);
	static bool		isSpecialValue(std::string token);
};
