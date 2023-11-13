/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:52:06 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 16:18:17 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::stats()
{
	std::cout << _Name << " have " << _Health << " health points, " << _Energy << \
		" energy and " << _Attack << " attack damage." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_Energy == 0)
		std::cout << _Name << " does not have enough energy." << std::endl;
	else if (_Health == 0)
		std::cout << _Name << " is already dead." << std::endl;
	else
	{
		_Energy--;
		std::cout << _Name << " attack " << target << " and inflicts him " \
			<< _Attack << " damage." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy == 0)
		std::cout << _Name << " does not have enough energy." << std::endl;
	else if (_Health == 0)
		std::cout << _Name << " is already dead." << std::endl;
	else
	{
		_Energy--;
		_Health+= amount;
		std::cout << _Name << " is healed, he have " << _Health << " health points" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_Health == 0)
		std::cout << "The dead body of " << _Name << " Taken " << amount << " damage." << std::endl;
	else
		{
		if (amount > _Health)
			_Health = 0;
		else
			_Health-= amount;
		std::cout << _Name << " taken " << amount << " damage, he have now " << \
			_Health << " health points." << std::endl;
	}
}

ClapTrap::ClapTrap()
{
	_Name = "<null>";
	_Health = 10;
	_Energy = 10;
	_Attack = 0;
	std::cout << _Name << " Claptrap created." << std::endl;
}

ClapTrap::ClapTrap(std::string Name, unsigned int Attack)
{
	_Name = Name;
	_Health = 10;
	_Energy = 10;
	_Attack = Attack;
	std::cout << "\033[1;32m[ClapTrap]\033[0m " << _Name << " created with " << Attack << " Attack" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	_Name = Name;
	_Health = 10;
	_Energy = 10;
	_Attack = 0;
	std::cout << "\033[1;32m[ClapTrap]\033[0m " << _Name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;32m[ClapTrap]\033[0m " << _Name << " deleted." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src)
{
	this->_Attack = src._Attack;
	this->_Energy = src._Energy;
	this->_Health = src._Health;
	this->_Name = src._Name;
	return (*this);
}
