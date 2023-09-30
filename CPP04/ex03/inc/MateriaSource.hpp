/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:22:37 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 22:06:39 by cpapot           ###   ########.fr       */
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
	MateriaSource(void);
	~MateriaSource();

	void	learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	index = 0;

	while (index != 4 && _knowlenge[index]->getType().compare(type))
		index++;
	if (index == 4)
		std::cout << "[createMateria] this materia does not exist" << std::endl;
	else
		return (_knowlenge[index]->clone());
	return 0;
}

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
	_knowlenge[index] = mat->clone();
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
