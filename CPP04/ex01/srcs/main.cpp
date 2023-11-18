/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:28:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 04:18:56 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
	Animal*	array[10];
	int		i = -1;

	while (i++ < 9)
	{
		if (i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
	}

	array[4]->makeSound();
	array[4]->useBrain(4);
	array[3]->useBrain(3);
	array[5]->makeSound();
	array[5]->useBrain(4);
	array[9]->useBrain(1);
	array[8]->makeSound();
	array[1]->makeSound();
	array[9]->useBrain(0);

	std::cout << std::endl;
	i = -1;
	while (i++ < 9)
		delete array[i];
	}
		std::cout << std::endl;
	{
		Cat test;

		test.setBrain(1, "bien le s");
		Cat test2(test);

		test2.setBrain(1, "oui");
		test.useBrain(1);
		test2.useBrain(1);

	}
}
