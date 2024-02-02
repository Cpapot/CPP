/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/22 17:27:32 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	test;

	for (int i = 0; i < 10; i++)
		test.push(i);

	MutantStack<int>::iterator ite = test.begin();

	while (ite != test.end())
	{
		std::cout << *ite << std::endl;
		ite++;
	}
}
