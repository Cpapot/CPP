/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:37:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 21:14:17 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::~Zombie(void)
{
	cout << RED << name << " is dead (it's tchao)" << WHITE << endl;
}

string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::setName(string newName)
{
	name = newName;
}

void	Zombie::announce(void)
{
	cout << BLUE << name << ": BraiiiiiiinnnzzzZ..." << WHITE << endl;
}

