/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:29:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:02:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALHPP
# define ANIMALHPP

#include "Animal.h"

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(Animal const &copy);
	virtual ~Animal();

	std::string	getType(void) const;

	void		printType(std::string str) const;
	virtual void		makeSound(void) const;

	Animal const	&operator=(Animal const &copy);
};

#endif
