/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:51:57 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/04 14:23:04 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ToUpperCase(char *str)
{
	int	index = 0;

	while (str[index])
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
		index++;
	}
	return (str);

}

int	main(int argc, char **argv)
{
	int	index = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (index != argc)
		{
			std::cout << ToUpperCase(argv[index]);
			index++;
		}
		std::cout << std::endl;
	}
}
