/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:51:12 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 16:29:05 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys()
{
	std::cout << _Name << " High five  👏 !" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	_Name = Name;
	_Health = 100;
	_Energy = 50;
	_Attack = 30;
	std::cout << "\033[1;31m[FragTrap]\033[0m " << _Name << " created." << std::endl;
}

FragTrap::FragTrap()
{
	_Name = "<null>";
	_Health = 100;
	_Energy = 100;
	_Attack = 30;
	std::cout << "\033[1;31m[FragTrap]\033[0m " << _Name << " created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;31m[FragTrap]\033[0m " << _Name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap()
{
	*this = cpy;
}

FragTrap&	FragTrap::operator=(FragTrap const &src)
{
	this->_Attack = src._Attack;
	this->_Energy = src._Energy;
	this->_Health = src._Health;
	this->_Name = src._Name;
	return (*this);
}
