/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:31:05 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/16 02:08:45 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Jack("Handsome", 3);
	ClapTrap	sangoku("sangoku", 4);

	Jack.attack("sangoku");
	sangoku.takeDamage(3);
	sangoku.beRepaired(3);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	Jack.beRepaired(2);
	Jack.attack("sangoku");
	sangoku.takeDamage(3);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	Jack.beRepaired(4);
}
