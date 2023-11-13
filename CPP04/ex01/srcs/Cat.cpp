/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:37:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:34:30 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	Animal::_brain = new Brain();
	this->printType("Cat");
	_brain->set_idea(0, "I want to eat");
	_brain->set_idea(1, "I want to poo");
	_brain->set_idea(2, "I want to break something");
	_brain->set_idea(3, "I want to meow");
	_brain->set_idea(4, "I want milk");
	std::cout << " created." << std::endl;
}

void		Cat::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*MIAOUU*" << std::endl;
}

Cat::~Cat()
{
	delete Animal::_brain;
	this->printType("Cat");
	std::cout << " deleted." << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	_type = cpy._type;
}

Cat const		&Cat::operator=(const Cat &src)
{
	Animal::operator=(src);
	return (*this);
}
