/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:03:12 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 19:03:12 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	string	name;
	Weapon	*type;
public:
	void	setWeapon(Weapon& newWeapon);
	void	attack(void);
	HumanB(string newName);
};

void	HumanB::attack(void)
{
	cout << name << " attacks with their " << type->getType() << endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	type = &newWeapon;
}

HumanB::HumanB(string newName)
{
	name = newName;
	type = NULL;
}

#endif
