/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:51:57 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/26 17:37:46 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	int			index = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (index != argc)
		{
			for (size_t y = 0; y != strlen(argv[index]); y++)
			{
				std::cout << (char)std::toupper(argv[index][y]);
			}
			index++;
		}
		std::cout << std::endl;
	}
}
