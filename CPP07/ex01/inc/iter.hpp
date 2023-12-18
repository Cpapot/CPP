/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:41:31 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/18 15:19:06 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array, unsigned int size, void (*function)(T &))
{
	for (unsigned int i = 0; i < size; i++)
	{
		function(array[i]);
	}
}


// test function
template <typename T>
void	printtab(T & value)
{
	std::cout << value << ", ";
}

template <typename T>
void	increment(T & value)
{
	value++;
}

template <typename T>
void	decrement(T & value)
{
	value--;
}

#endif
