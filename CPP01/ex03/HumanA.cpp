/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:16:10 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:16:57 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << type->getType() << std::endl;
}

HumanA::HumanA(std::string newName, Weapon& newType)
{
	name = newName;
	type = &newType;
}
