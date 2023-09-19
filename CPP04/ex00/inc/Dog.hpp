/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:46:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/19 14:00:22 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGHPP
# define DOGHPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	~Dog();
};

#endif
