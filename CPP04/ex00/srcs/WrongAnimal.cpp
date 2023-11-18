/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:43:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 16:18:12 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::printType(std::string str) const
{
	std::cout << "\033[1;32m[" << str << "]\033[0m";
}

void	WrongAnimal::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*unidentified Animal noise*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}

WrongAnimal::WrongAnimal()
{
	_type = "unidentified Animal";
	this->printType("WrongAnimal");
	std::cout << " created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	this->printType("WrongAnimal");
	std::cout << " deleted (" << _type << ")." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	this->_type = copy.getType();
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->_type = copy.getType();
	return (*this);
}
➜  e
