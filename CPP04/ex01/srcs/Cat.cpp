/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:37:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 16:34:33 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	Animal::_sound = "*MIAOUU*";
	Animal::_brain = new Brain();
	this->printType("Cat");
	_brain->set_idea(0, "I want to eat");
	_brain->set_idea(1, "I want to poo");
	_brain->set_idea(2, "I want to break something");
	_brain->set_idea(3, "I want to meow");
	_brain->set_idea(4, "I want milk");
	std::cout << " created." << std::endl;
}

Cat::~Cat()
{
	delete Animal::_brain;
	this->printType("Cat");
	std::cout << " deleted." << std::endl;
}

