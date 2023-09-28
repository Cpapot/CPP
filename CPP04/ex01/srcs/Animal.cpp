/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:43:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 16:46:04 by cpapot           ###   ########.fr       */
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
	std::cout << _sound << std::endl;
}

std::string	Animal::getType(void) const
{
	return _type;
}

Animal::Animal()
{
	_type = "unidentified animal";
	_sound = "*unidentified animal noise*";
	this->printType("Animal");
	std::cout << " created." << std::endl;
}

Animal::~Animal()
{
	this->printType("Animal");
	std::cout << " deleted (" << _type << ")." << std::endl;
}

void	Animal::setBrain(int index, std::string const &idea)
{
	if (_brain == NULL)
		std::cout << "This animal as no brain" << std::endl;
	else
		_brain->set_idea(index, idea);
}
void	Animal::useBrain(int index)
{
	this->printType("BRAIN");
	if (_brain == NULL)
		std::cout << "This animal as no brain" << std::endl;
	else
		std::cout << _brain->get_idea(index) << std::endl;
}
