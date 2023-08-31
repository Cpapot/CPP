/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:38:26 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/31 15:55:50 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::Search(int size)
{
	int			id;
	std::string	str;

	for (int index = 0; index < size && index < 8; index++)
		contactArr[index].printContact((index) + 1);
	str = getSecureNumber("Index of Contact");
	id = std::atoi(str.c_str());
	if (id <= 0 || id > 8)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (size >= 8 || id <= size)
		contactArr[id - 1].printContact(id);
	else
		std::cout << "Contact Does not exist" << std::endl;
}

void	PhoneBook::add(int *size)
{
	int			buff;
	static int	index = 0;

	if (index == 8)
		index = 0;
	contactArr[index].setCont();
	index++;
	buff = *size;
	buff++;
	*size = buff;
	std::cout << *size << std::endl;
	std::cout << "Contact added at index " << index << std::endl;
}
