/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:02 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:02:02 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	Animal::_type = "Dog";
	this->printType("Dog");
	std::cout << " created." << std::endl;
}

Dog::~Dog()
{
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
