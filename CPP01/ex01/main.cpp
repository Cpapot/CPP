/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:38:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 16:31:38 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main(void)
{
	Zombie	*horde = zombieHorde(10, "gerard");
	for (int i = 0; i != 10; i++)
		horde[i].announce();
	Zombie *horde2 = zombieHorde(3, "GIMS");
	for (int i = 0; i != 3; i++)
		horde2[i].announce();
	delete [] horde2;
	delete [] horde;
}
