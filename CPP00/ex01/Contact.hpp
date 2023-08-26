/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:40:11 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/26 17:44:27 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP

# define	CONTACT_HPP

#include "inc.h"

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

#endif
