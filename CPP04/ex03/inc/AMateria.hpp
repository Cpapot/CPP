/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:19:52 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 19:34:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "lib.h"
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(const AMateria &cpy);
		std::string const &	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

AMateria::AMateria(const AMateria &cpy)
{
	_type = cpy._type;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

AMateria::AMateria(void) {}
AMateria::AMateria(std::string const & type)
{
	_type = type;
}

#endif
