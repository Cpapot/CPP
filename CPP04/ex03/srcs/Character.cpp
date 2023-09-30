/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:56:42 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 19:40:10 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const Character &cpy)
{
	this->_name = cpy._name;
	delete this->_inventory[0];
	this->_inventory[0] = cpy._inventory[0];
	delete this->_inventory[1];
	this->_inventory[1] = cpy._inventory[1];
	delete this->_inventory[2];
	this->_inventory[2] = cpy._inventory[2];
	delete this->_inventory[3];
	this->_inventory[3] = cpy._inventory[3];
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "[use] Invalid Index" << std::endl;
		return ;
	}
	if (_inventory[idx]->getType().compare("<null>"))
		std::cout << "[use] Inventory slot empty" << std::endl;
	else
		_inventory[idx]->use(target);
}

void	Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "[unequip] Invalid Index" << std::endl;
		return ;
	}
	if (_inventory[idx]->getType().compare("<null>"))
		std::cout << "[unequip] Inventory slot already empty" << std::endl;
	else
		delete _inventory[idx];
		_inventory[idx]->setType("<null>");
}

void	Character::equip(AMateria* m)
{
	int	index = 0;

	while (index != 4 && _inventory[index]->getType().compare("<null>"))
		index++;
	if (index == 4)
	{
		std::cout << "[equip] Inventory is full" << std::endl;
		return ;
	}
	delete _inventory[index];
	_inventory[index] = m->clone();
}

std::string const & Character::getName() const
{
	return _name;
}

Character::Character()
{
	_name = "<null>";
	_inventory[0]->setType("<null>");
	_inventory[1]->setType("<null>");
	_inventory[2]->setType("<null>");
	_inventory[3]->setType("<null>");
}

Character::Character(std::string name)
{
	_name = name;
}

Character::~Character()
{
	delete this->_inventory[0];
	delete this->_inventory[1];
	delete this->_inventory[2];
	delete this->_inventory[3];
}
