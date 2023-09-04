/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:08:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 17:07:17 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.h"

int	error(std::string error_written)
{
	std::cout << RED << error_written << WHITE << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (error("invalid entry 😔"));
	(void)argv;
	stream	file(argv[1]);
	if (file.checkStream() == 1)
		return (error("Can't read file 😔"));
	else if (file.checkStream() == 2)
		return (error("Can't write file 😔"));
	while (42)
	{
		file.readLine();
		if (file.isFinish())
			break;
		file.replaceInLine(argv[2], argv[3]);
		file.writeLine();
	}
	std::cout << GREEN << "Job done 👍" << WHITE << std::endl;
	return (0);
}

