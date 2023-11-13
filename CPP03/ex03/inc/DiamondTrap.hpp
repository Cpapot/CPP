/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:09:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 17:04:18 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMONDTRAPHPP

# define DIAMONDTRAPHPP

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_Name;
public:
	DiamondTrap(std::string Name);
	DiamondTrap(void);

	~DiamondTrap(void);

	void	attack(std::string &target);
	void	whoAmI(void);
};

#endif
