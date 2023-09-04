/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:03:12 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:18:05 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*type;
public:
	void	setWeapon(Weapon& newWeapon);
	void	attack(void);
	HumanB(std::string newName);
};

#endif
