/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:49:29 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/28 16:27:29 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.h"

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain(void);
	~Brain();

	std::string	get_idea(int index);
	void		set_idea(int index, std::string const &idea);

	void	print();
};

#endif
