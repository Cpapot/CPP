/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:22:37 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 19:36:42 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_knowlenge[4];
public:
	MateriaSource(/* args */);
	~MateriaSource();

	void	learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
};

void	MateriaSource::learnMateria(AMateria* mat)
{
	int	index = 0;

	while (index != 4 && _knowlenge[index]->getType().compare("<null>"))
		index++;
	if (index == 4)
	{
		std::cout << "[learnMateria] knowlenge is full" << std::endl;
		return ;
	}
	_knowlenge[index] = mat;
}

MateriaSource::MateriaSource()
{
	_knowlenge[0]->setType("<null>");
	_knowlenge[1]->setType("<null>");
	_knowlenge[2]->setType("<null>");
	_knowlenge[3]->setType("<null>");
}

MateriaSource::~MateriaSource()
{
}


#endif
