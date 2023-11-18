/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:36:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 04:00:48 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATHPP
# define CATHPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain		*_brain;
public:
	Cat(void);
	Cat(const Cat &cpy);

	~Cat();

	void		setBrain(int index, std::string const &idea);
	void		useBrain(int index);

	void		makeSound(void) const;

	Cat const		&operator=(const Cat &src);
};

#endif
