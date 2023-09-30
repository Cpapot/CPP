/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:57:24 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 19:07:57 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria*	Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure(const Cure &cpy)
{
	AMateria::_type = cpy.AMateria::_type;
}

Cure::Cure()
{
	AMateria::_type = "cure";
}

Cure::~Cure()
{
}
