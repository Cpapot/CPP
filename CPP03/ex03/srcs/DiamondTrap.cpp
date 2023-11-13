/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:50:17 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 17:04:09 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI()
{
	std::cout << "The monster is called " << _Name << std::endl;
}

void	DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(std::string Name)
{
	_Name = Name;
	ClapTrap::_Name = Name + "_clap_name";
	this->_Health = FragTrap::_Health;
	this->_Energy = ScavTrap::_Energy;
	this->_Attack = FragTrap::_Attack;
	std::cout << "\033[1;36m[DiamondTrap]\033[0m " << _Name << " created." << std::endl;

}

DiamondTrap::DiamondTrap()
{
	_Name = "<null>";
	ClapTrap::_Name = "<null>_clap_name";
	this->_Health = FragTrap::_Health;
	this->_Energy = ScavTrap::_Energy;
	this->_Attack = FragTrap::_Attack;
	std::cout << "\033[1;36m[DiamondTrap]\033[0m " << _Name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;36m[DiamondTrap]\033[0m " << _Name << " deleted." << std::endl;
}

