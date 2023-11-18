/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:28:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 04:23:35 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		Dog	doggy;
		Cat	cat;

		doggy.makeSound();
		doggy.useBrain(4);
		doggy.useBrain(3);
		cat.makeSound();
		cat.useBrain(4);
		cat.useBrain(0);
	}

	/*{
		Animal test;
	}*/
}
