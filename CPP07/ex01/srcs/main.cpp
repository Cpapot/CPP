/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/13 16:08:02 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
	{
		int	oui[5] = {4, 9, 63, 21, 45};
		iter(oui, 5, printtab);
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		char str[7] = {'b', 'o', 'n', 'j', 'o', 'u', 'r'};
		iter(str, 7, printtab);
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		std::string array[3] = {"salut", "a", "tous"};

		iter(array, 3, printtab);
	}
}
