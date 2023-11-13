/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:37:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:00:46 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	this->printType("Cat");
	std::cout << " created." << std::endl;
}

Cat::~Cat()
{
	this->printType("Cat");
	std::cout << " deleted." << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	_type = cpy._type;
}

void		Cat::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*MIAOUU*" << std::endl;
}

Cat const		&Cat::operator=(const Cat &src)
{
	Animal::operator=(src);
	return (*this);
}
