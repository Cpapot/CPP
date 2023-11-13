/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:28:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 10:57:59 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* y = new Cat();
		const Animal* i(y);


		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete	meta;
		delete	j;
		delete	i;
	}
	std::cout << std::endl;
	{
		WrongCat	fakeCat;

		std::cout << fakeCat.getType() << " " << std::endl;
		fakeCat.makeSound();
		fakeCat.makeSound();
	}

}
