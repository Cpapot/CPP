/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:14:45 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:15:40 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string newType)
{
	type = newType;
}

std::string Weapon::getType(void)
{
	return (type);
}
Weapon::Weapon(std::string newWeapon)
{
	type = newWeapon;
}
