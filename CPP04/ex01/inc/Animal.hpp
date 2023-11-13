/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:29:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:07:10 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALHPP
# define ANIMALHPP

#include "Animal.h"
#include "Brain.hpp"

class Animal
{
protected:
	std::string	_type;
	Brain		*_brain;
public:
	Animal(void);
	Animal(Animal const &copy);
	virtual ~Animal();

	std::string	getType(void) const;

	void		setBrain(int index, std::string const &idea);
	void		useBrain(int index);

	void		printType(std::string str) const;
	virtual void		makeSound(void) const;

	Animal const	&operator=(Animal const &copy);
};

#endif
