/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:43:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/04 18:48:28 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string		input;
	PhoneBook		phone;
	int				size = 0;

	std::cout << "welcome to phonebook !" << std::endl;
	while(1)
	{
		input = getSecureString("PhoneBook");
		if (!input.compare("ADD"))
			phone.add(&size);
		else if (!input.compare("SEARCH"))
			phone.Search(size);
		else if (!input.compare("EXIT"))
			exit(0);
	}
}
