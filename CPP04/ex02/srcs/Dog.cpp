/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:02 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 04:23:00 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	Animal::_type = "Dog";
	_brain = new Brain();
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
	delete _brain;
	this->printType("Dog");
	std::cout << " deleted." << std::endl;
}

void	Dog::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*WOAF*" << std::endl;
}

void	Dog::setBrain(int index, std::string const &idea)
{
	if (_brain == NULL)
		std::cout << "This animal as no brain" << std::endl;
	else
		_brain->set_idea(index, idea);
}
void	Dog::useBrain(int index)
{
	this->printType("BRAIN");
	if (_brain == NULL)
		std::cout << "This animal as no brain" << std::endl;
	else
		std::cout << _brain->get_idea(index) << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	_brain = new Brain(*cpy._brain);
}

Dog const		&Dog::operator=(const Dog &src)
{
	Animal::operator=(src);
	_brain = new Brain(*src._brain);
	return (*this);
}
