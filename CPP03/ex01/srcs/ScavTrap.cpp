/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:46:22 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/17 14:46:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << _Name << " is Now in gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap()
{
	_Name = "<null>";
	_Health = 100;
	_Energy = 50;
	_Attack = 20;
	std::cout << _Name << " ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name = Name;
	_Health = 100;
	_Energy = 50;
	_Attack = 20;
	std::cout << _Name << " ScavTrap created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::clog << _Name << " ScavTrap deleted." << std::endl;
}
