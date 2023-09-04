/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:38:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:07:32 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	Zombie z1("Sheesh");
	Zombie *z2 = newZombie("ekip");

	z1.announce();
	randomChump("le boss");
	z2->announce();
	delete z2;
}
