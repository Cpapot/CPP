/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:57:14 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/05 20:03:48 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

typedef	void (Harl::*fptr)(void);

void	Harl::debug(void)
{
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

int		Harl::findFilter(std::string filter)
{
	std::map<std::string, int>	filter_map;

	filter_map[""] = 1;
	filter_map["DEBUG"] = 1;
	filter_map["INFO"] = 2;
	filter_map["WARNING"] = 3;
	filter_map["ERROR"] = 4;
	if (filter_map.find(filter) == filter_map.end())
		return (0);
	else
		return (filter_map[filter]);
}

void	Harl::complain(std::string level)
{
	fptr				complain_type;
	std::map<std::string, fptr>	complain_map;

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
