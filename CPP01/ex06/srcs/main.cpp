/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:57:16 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/05 20:14:01 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <unistd.h>
#include "signal.h"

void killHarl(int sig)
{
	(void)sig;
	std::cout << CYAN << "\r\033[2KHarl is dead, he no longer complain !!!!" << std::endl;
	_exit(0);
}

int main(int argc, char **argv)
{
	int				filter;
	Harl			sheesh;

	if (argc == 1)
		filter = sheesh.findFilter("");
	else
		filter = sheesh.findFilter(std::string(argv[1]));
	signal(SIGINT, killHarl);
	while (filter != 5)
	{
		switch (filter)
		{
			case 0:
				std::cout << "nothing" << std::endl;
				filter = 5;
				break;
			case 1:
				sheesh.complain("DEBUG");
				filter++;
				sleep(1);
				break;
			case 2:
				sheesh.complain("INFO");
				filter++;
				sleep(1);
				break;
			case 3:
				sheesh.complain("WARNING");
				filter++;
				sleep(1);
				break;
			case 4:
				sheesh.complain("ERROR");
				filter++;
				break;
		}
	}
}
