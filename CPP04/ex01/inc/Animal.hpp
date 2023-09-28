/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:29:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 16:22:52 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALHPP
# define ANIMALHPP

#include "Animal.h"
#include "Brain.hpp"

class Animal
{
protected:
	std::string	_sound;
	std::string	_type;
	Brain		*_brain;
public:
	Animal(void);
	virtual ~Animal();

	std::string	getType(void) const;
	void		setBrain(int index, std::string const &idea);
	void		useBrain(int index);
	void		printType(std::string str) const;
	void		makeSound(void) const;
};

#endif
