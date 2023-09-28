/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:23:21 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 19:20:39 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "lib.h"

class AMateria;

class ICharacter
{
	protected:
		std::string	_name;
	public:
		ICharacter(std::string & name);
		ICharacter(void);
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

ICharacter::ICharacter() {}
ICharacter::ICharacter(std::string & name)
{
	_name = name;
}

#endif
