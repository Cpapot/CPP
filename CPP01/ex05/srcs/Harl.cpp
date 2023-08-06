/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:57:14 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/06 18:58:46 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

typedef	void (Harl::*fptr)(void);

void	Harl::debug(void)
{
	cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << endl;
}

void	Harl::info(void)
{
	cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
}

void	Harl::warning(void)
{
	cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void)
{
	cout << RED << "This is unacceptable ! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level)
{
	fptr				complain_type;
	map<string, fptr>	complain_map;

	complain_map["DEBUG"] = &Harl::debug;
	complain_map["INFO"] = &Harl::info;
	complain_map["WARNING"] = &Harl::warning;
	complain_map["ERROR"] = &Harl::error;
	if (complain_map.find(level) != complain_map.end())
	{
		complain_type = complain_map[level];
		(this->*complain_type)();
	}
}
