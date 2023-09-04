/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:02:50 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:12:12 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie	*Horde = new Zombie[N];

	while (i != N)
	{
		Horde[i].setName(name);
		i++;
	}
	return (Horde);
}
