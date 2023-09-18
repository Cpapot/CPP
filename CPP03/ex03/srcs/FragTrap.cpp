/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:51:12 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/18 16:08:26 by cpapot           ###   ########.fr       */
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
	_Energy = 50;
	_Attack = 30;
	std::cout << "\033[1;31m[FragTrap]\033[0m " << _Name << " created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;31m[FragTrap]\033[0m " << _Name << " created." << std::endl;
}
