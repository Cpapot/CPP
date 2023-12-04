/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:37:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 14:45:24 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongAnimal::_type = "WrongCat";
	this->printType("WrongCat");
	std::cout << " created." << std::endl;
}

WrongCat::~WrongCat()
{
	this->printType("WrongCat");
	std::cout << " deleted." << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
}

WrongCat const		&WrongCat::operator=(const WrongCat &src)
{
	WrongAnimal::operator=(src);
	return (*this);
}
