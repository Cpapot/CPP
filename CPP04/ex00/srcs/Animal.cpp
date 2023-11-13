/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:43:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 10:59:23 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::printType(std::string str) const
{
	std::cout << "\033[1;32m[" << str << "]\033[0m";
}

void	Animal::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*unidentified animal noise*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return _type;
}

Animal::Animal()
{
	_type = "unidentified animal";
	this->printType("Animal");
	std::cout << " created." << std::endl;
}

Animal::~Animal()
{
	this->printType("Animal");
	std::cout << " deleted (" << _type << ")." << std::endl;
}

Animal::Animal(Animal const &copy)
{
	this->_type = copy.getType();
}

Animal const	&Animal::operator=(Animal const &copy)
{
	this->_type = copy.getType();
	return (*this);
}
