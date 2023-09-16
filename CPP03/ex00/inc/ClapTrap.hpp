/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:31:26 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/16 02:09:16 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAPHPP
# define CLAPTRAPHPP

#include "Claptrap.h"

class ClapTrap
{
private:
	std::string		_Name;
	unsigned int	_Health;
	unsigned int	_Energy;
	unsigned int	_Attack;
public:
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
	ClapTrap(std::string Name);
	ClapTrap(std::string Name, unsigned int Attack);
	~ClapTrap();
};

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

ClapTrap::ClapTrap(std::string Name, unsigned int Attack)
{
	_Name = Name;
	_Health = 10;
	_Energy = 10;
	_Attack = Attack;
	std::cout << _Name << " created with " << Attack << " Attack" << std::endl;
}


ClapTrap::ClapTrap(std::string Name)
{
	_Name = Name;
	_Health = 10;
	_Energy = 10;
	_Attack = 0;
	std::cout << _Name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _Name << " deleted." << std::endl;
}

#endif
