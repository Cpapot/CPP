/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:29:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 17:08:13 by cpapot           ###   ########.fr       */
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

	std::string			getType(void) const;
	virtual void		setBrain(int index, std::string const &idea) = 0;
	virtual void		useBrain(int index) = 0;
	void				printType(std::string str) const;
	virtual void		makeSound(void) const = 0;
};

#endif
