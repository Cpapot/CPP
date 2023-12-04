/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:37:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/04 09:38:15 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	_brain = new Brain();
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
	delete _brain;
	this->printType("Cat");
	std::cout << " deleted." << std::endl;
}

void		Cat::makeSound(void) const
{
	this->printType(_type);
	std::cout << "*MIAOUU*" << std::endl;
}

void	Cat::setBrain(int index, std::string const &idea)
{
	if (_brain == NULL)
		std::cout << "This animal as no brain" << std::endl;
	else
		_brain->set_idea(index, idea);
}
void	Cat::useBrain(int index)
{
	this->printType("BRAIN");
	if (_brain == NULL)
		std::cout << "This animal as no brain" << std::endl;
	else
		std::cout << _brain->get_idea(index) << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	_brain = new Brain(*cpy._brain);
}

Cat const		&Cat::operator=(const Cat &src)
{
	Animal::operator=(src);
	delete _brain;
	_brain = new Brain(*src._brain);
	return (*this);
}

