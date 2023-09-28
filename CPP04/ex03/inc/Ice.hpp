/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:55:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 19:33:59 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
private:
	/* data */
public:
	Ice(void);
	Ice(const Ice &cpy);
	~Ice();

	Ice*	clone(void);
	void	use(ICharacter& target);
};

Ice::Ice(const Ice &cpy)
{
	_type = cpy._type;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice*	Ice::clone()
{
	return new Ice(*this);
}

Ice::Ice()
{
	_type = "ice";
}

Ice::~Ice()
{
}


#endif
