/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:48:04 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/18 15:59:01 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAPHPP
# define	FRAGTRAPHPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string Name);
	~FragTrap();

	void	highFivesGuys(void);
};

#endif
