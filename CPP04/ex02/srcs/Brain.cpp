/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:16:54 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:31:53 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void	Brain::set_idea(int index, std::string const &idea)
{
	_ideas[index] = idea;
}

void	Brain::print()
{
	std::cout << "\033[1;32m[" << "BRAIN" << "]\033[0m";
}

std::string	Brain::get_idea(int index)
{
	if (_ideas[index].empty())
		return ("<null>");
	return (_ideas[index]);
}

Brain::Brain()
{
	print();
	std::cout << " created" << std::endl;
}

Brain::~Brain()
{
	print();
	std::cout << " deleted" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	for (int i = 0; i != 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain const	&Brain::operator=(Brain const &copy)
{
	for (int i = 0; i != 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}
