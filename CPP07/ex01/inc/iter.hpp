/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:41:31 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/13 16:05:33 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	iter(T *array, unsigned int size, void (*function)(const T &))
{
	for (unsigned int i = 0; i < size; i++)
	{
		function(array[i]);
	}
}

template <typename T>
void	printtab(const T & ok)
{
	std::cout << ok << std::endl;
}
