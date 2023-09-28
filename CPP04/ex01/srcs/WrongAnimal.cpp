/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:43:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/19 18:08:26 by cpapot           ###   ########.fr       */
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
	std::cout << _sound << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}

WrongAnimal::WrongAnimal()
{
	_type = "unidentified Animal";
	_sound = "*unidentified Animal noise*";
	this->printType("WrongAnimal");
	std::cout << " created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	this->printType("WrongAnimal");
	std::cout << " deleted (" << _type << ")." << std::endl;
}

