/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:17:47 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:25:22 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (type != NULL)
		std::cout << name << " attacks with their " << type->getType() << std::endl;
	else
		std::cout << name << "  tries to attack, but remembers he has no weapons" << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	type = &newWeapon;
}

HumanB::HumanB(std::string newName)
{
	name = newName;
	type = NULL;
}
