/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:14:49 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/31 16:25:49 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPHPP
# define SCAVTRAPHPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap &cpy);

	~ScavTrap(void);

	ScavTrap&	operator=(ScavTrap const &src);

	void	guardGate(void);
};

#endif
