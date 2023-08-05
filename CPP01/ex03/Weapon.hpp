/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:56:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 18:54:03 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>
using namespace std;

class Weapon
{
private:
	string	type;
public:
	void	setType(string newType);
	string	getType(void);
	Weapon(string newWeapon);
};

void	Weapon::setType(string newType)
{
	type = newType;
}

string Weapon::getType(void)
{
	return (type);
}
Weapon::Weapon(string newWeapon)
{
	type = newWeapon;
}

#endif
