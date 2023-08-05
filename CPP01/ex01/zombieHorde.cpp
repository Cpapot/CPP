/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:02:50 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 17:17:35 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name)
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
