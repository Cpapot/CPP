/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:44:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:32:09 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALHPP
# define WRONGANIMALHPP

#include "Animal.h"

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal(void);
	virtual ~WrongAnimal();

	std::string	getType(void) const;

	void		printType(std::string str) const;
	void		makeSound(void) const;
};

#endif
