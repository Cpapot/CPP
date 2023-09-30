/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:07:09 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 19:15:27 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];
public:
	Character(void);
	Character(const Character &cpy);
	Character(std::string name);
	~Character();

	std::string const &	getName() const;

	void		equip(AMateria* m);
	void		unequip(int idx);
	void		use(int idx, ICharacter& target);
};

#endif
