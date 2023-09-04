/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:37:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:03:00 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	name = "Foo";
}

Zombie::Zombie(std::string newName)
{
	name = newName;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead (it's tchao)" << std::endl;
}

std::string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
