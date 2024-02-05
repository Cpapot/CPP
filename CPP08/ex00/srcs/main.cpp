/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/05 13:39:38 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"

int main()
{
	{
		try
		{
			std::vector<int> vector;

		for (int i = 0; i < 30; i++)
			vector.push_back(i);

		easyfind(vector, 40);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}


	{
		std::vector<int> vector;

		for (int i = 0; i < 30; i++)
			vector.push_back(i);

		easyfind(vector, 15);
	}

	{
		std::vector<char> vector;
		vector.push_back('a');
		vector.push_back('b');
		vector.push_back('c');
		vector.push_back('d');
		vector.push_back('e');
		vector.push_back('f');
		easyfind(vector, 'f');
		try
		{
			easyfind(vector, 'w');
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}
}
