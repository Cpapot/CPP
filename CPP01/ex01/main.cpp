/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:38:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 17:22:33 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	int		i = 0;
	Zombie	*FOO;

	FOO = zombieHorde(20, "bernard");
	while (i != 20)
	{
		FOO[i].announce();
		i++;
	}
	delete FOO;
}
