/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:14:49 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/18 15:59:11 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPHPP
# define SCAVTRAPHPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string Name);
	~ScavTrap();

	void	guardGate(void);
};

#endif
