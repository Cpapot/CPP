/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:31:05 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/18 16:01:23 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	scav("scav");
	FragTrap	frag("frag");
	ClapTrap	clap("clap");
	DiamondTrap	Diamond("diamond");

	Diamond.stats();
	clap.stats();
	scav.stats();
	frag.stats();
	Diamond.whoAmI();
	scav.attack("frag");
	frag.takeDamage(20);
	clap.attack("scav");
	clap.attack("scav");
	scav.attack("clap");
	scav.attack("clap");
	clap.takeDamage(20);
	clap.takeDamage(20);
	frag.attack("scav");
	scav.takeDamage(30);
	scav.guardGate();
	frag.attack("scav");
	scav.takeDamage(30);
	frag.attack("scav");
	scav.takeDamage(30);
	frag.attack("scav");
	scav.takeDamage(30);
	frag.highFivesGuys();
	frag.highFivesGuys();
	frag.highFivesGuys();
}
