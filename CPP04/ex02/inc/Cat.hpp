/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:36:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/13 11:29:14 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATHPP
# define CATHPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &cpy);
	~Cat();

	void	useBrain(int index);
	void	setBrain(int index, std::string const &idea);
	void	makeSound(void) const;

	Cat const		&operator=(const Cat &src);
};

#endif
