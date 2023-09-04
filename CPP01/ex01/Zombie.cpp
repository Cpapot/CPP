/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:37:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:11:54 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::~Zombie(void)
{
	std::cout << RED << name << " is dead (it's tchao)" << WHITE << std::endl;
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
	std::cout << BLUE << name << ": BraiiiiiiinnnzzzZ..." << WHITE << std::endl;
}

