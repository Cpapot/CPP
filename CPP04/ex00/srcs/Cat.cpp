/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:37:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/19 18:01:16 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	Animal::_sound = "*MIAOUU*";
	this->printType("Cat");
	std::cout << " created." << std::endl;
}

Cat::~Cat()
{
	this->printType("Cat");
	std::cout << " deleted." << std::endl;
}

