/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:03:12 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 19:01:40 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	string	name;
	Weapon	*type;
public:
	void	attack(void);
	HumanA(string newName, Weapon& newType);
};

void	HumanA::attack(void)
{
	cout << name << " attacks with their " << type->getType() << endl;
}

HumanA::HumanA(string newName, Weapon& newType)
{
	name = newName;
	type = &newType;
}

#endif
