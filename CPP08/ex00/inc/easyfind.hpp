/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:56:21 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/22 14:11:53 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
void	easyfind(T &container, int nb)
{
	typename T::const_iterator	result;
	result = std::find(container.begin(), container.end(), nb);
	if (result == container.end())
		throw std::invalid_argument("easyfind::ElementNotFound");
	else
		std::cout << "Element found : " << *result << std::endl;
}

# endif
