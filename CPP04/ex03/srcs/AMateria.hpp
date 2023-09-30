/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:58:37 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/30 18:58:54 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void AMateria::setType(std::string const &type)
{
	_type = type;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

AMateria::AMateria() {}
AMateria::AMateria(std::string const & type)
{
	_type = type;
}
