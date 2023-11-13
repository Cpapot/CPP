/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:02 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:09:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	Animal::_type = "Dog";
	Animal::_brain = new Brain();
	_brain->set_idea(0, "I want to eat");
	_brain->set_idea(1, "I want to poo");
	_brain->set_idea(2, "I want to bring the ball back");
	_brain->set_idea(3, "I want to bark");
	_brain->set_idea(4, "I want water");
	this->printType("Dog");
	std::cout << " created." << std::endl;
}

Dog::~Dog()
{
	delete Animal::_brain;
	this->printType("Dog");
	std::cout << " deleted." << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	_type = cpy._type;
}

void		Dog::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*WOAF*" << std::endl;
}

Dog const		&Dog::operator=(const Dog &src)
{
	Animal::operator=(src);
	return (*this);
}
