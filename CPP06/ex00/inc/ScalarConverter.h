/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:03:51 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/18 13:47:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <limits>

# define INT_MAX	2147483647
# define INT_MIN	-2147483648

# define FLOAT_MIN	-std::numeric_limits<float>::max()
# define FLOAT_MAX	std::numeric_limits<float>::max()

# define DOUBLE_MIN	-std::numeric_limits<double>::max()
# define DOUBLE_MAX	std::numeric_limits<double>::max()

#endif
