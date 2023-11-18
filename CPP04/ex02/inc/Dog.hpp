/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:46:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 04:21:09 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGHPP
# define DOGHPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain		*_brain;
public:
	Dog(void);
	Dog(const Dog &cpy);
	~Dog();

	void	useBrain(int index);
	void	setBrain(int index, std::string const &idea);
	void	makeSound(void) const;

	Dog const	&operator=(const Dog &src);
};

#endif
