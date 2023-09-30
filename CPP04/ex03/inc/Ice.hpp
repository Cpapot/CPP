/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:55:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 19:07:43 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(void);
	~Ice();
	Ice(const Ice &cpy);

	AMateria*	clone(void) const;
	void		use(ICharacter& target);
};

#endif
