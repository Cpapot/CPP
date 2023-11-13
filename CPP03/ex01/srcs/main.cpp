/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:31:05 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 16:22:58 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	test("edge");
	ClapTrap	clap("la lune", 1);

	ScavTrap scav(test);
	clap.attack("edge");
	scav.takeDamage(1);
	scav.beRepaired(1);
	scav.guardGate();
	scav.attack("la lune");
	clap.takeDamage(20);
	scav.stats();
	clap.stats();

}
