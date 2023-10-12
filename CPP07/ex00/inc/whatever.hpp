/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:56:21 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/12 15:12:37 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T *first, T *second)
{
	T	tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
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
