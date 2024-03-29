/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:57:16 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/05 18:26:16 by cpapot           ###   ########.fr       */
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

int main()
{
	int		HarlAlive = 1;
	Harl	sheesh;

	signal(SIGINT, killHarl);
	while (HarlAlive)
	{
		sheesh.complain("DEBUG");
		sleep(1);
		sheesh.complain("INFO");
		sleep(1);
		sheesh.complain("WARNING");
		sleep(1);
		sheesh.complain("ERROR");
		sleep(1);
	}
}
