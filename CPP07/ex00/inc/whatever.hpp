/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:56:21 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/18 15:03:51 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &first, T &second)
{
	T	tmp;

	tmp = first;
	first = second;
	second = tmp;
}

template<typename T>
T		min(const T& first, const T& second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

template<typename T>
T		max(const T& first, const T& second)
{
	if (first > second)
		return (first);
	else
		return (second);
}

#endif
