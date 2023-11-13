/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:31:26 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 16:09:28 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAPHPP
# define CLAPTRAPHPP

#include "Claptrap.h"

class ClapTrap
{
protected:
	std::string		_Name;
	unsigned int	_Health;
	unsigned int	_Energy;
	unsigned int	_Attack;
public:
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	attack(const std::string& target);
	void	stats(void);

	ClapTrap(void);
	ClapTrap(std::string Name);
	ClapTrap(std::string Name, unsigned int Attack);
	ClapTrap(const ClapTrap &cpy);

	//operator
	ClapTrap&	operator=(ClapTrap const &src);

	~ClapTrap();
};

#endif
