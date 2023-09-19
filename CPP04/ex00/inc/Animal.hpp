/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:29:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/19 17:39:40 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALHPP
# define ANIMALHPP

#include "Animal.h"

class Animal
{
protected:
	std::string	_sound;
	std::string	_type;
public:
	Animal(void);
	virtual ~Animal();

	std::string	getType(void) const;

	void		printType(std::string str) const;
	void		makeSound(void) const;
};

#endif
