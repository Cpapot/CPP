/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:40:11 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/04 18:47:20 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP

# define	CONTACT_HPP

#include "inc.h"
#include "SecureString.hpp"

class Contact
{
private:
	std::string		name;
	std::string		lastName;
	std::string		phone;
	std::string		secret;
	std::string		nickname;
public:
	void	printContact(int index);
	void	setCont(void);
};

void	Contact::printContact(int index)
{
	std::cout << "|" << std::setw(10) << std::right << index << "|";
	if (name.length() > 10)
	{
		name[9] = '.';
		std::cout << std::setw(10) << std::right <<  name.substr(0, 10) << "|";
	}
	else
		std::cout << std::setw(10) << std::right << name << "|";
	if (lastName.length() > 10)
	{
		lastName[9] = '.';
		std::cout << std::setw(10) << std::right <<  lastName.substr(0, 10) << "|";
	}
	else
		std::cout << std::setw(10) << std::right << lastName << "|";
	if (nickname.length() > 10)
	{
		nickname[9] = '.';
		std::cout << std::setw(10) << std::right <<  nickname.substr(0, 10) << "|" << std::endl;
	}
	else
		std::cout << std::setw(10) << std::right << nickname << "|" << std::endl;
}

void	Contact::setCont(void)
{
	std::cout << "New contact" << std::endl;
	name = getSecureString("Name");
	lastName = getSecureString("Last Name");
	nickname = getSecureString("NickName");
	phone = getSecureNumber("Phone Number");
	secret = getSecureString("Darkest Secret");
}

#endif
