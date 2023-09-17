/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:31:26 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/17 13:52:38 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAPHPP
# define CLAPTRAPHPP

#include "Claptrap.h"

class ClapTrap
{
private:
	std::string		_Name;
	unsigned int	_Health;
	unsigned int	_Energy;
	unsigned int	_Attack;
public:
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
	ClapTrap(std::string Name);
	ClapTrap(std::string Name, unsigned int Attack);
	~ClapTrap();
};

#endif
