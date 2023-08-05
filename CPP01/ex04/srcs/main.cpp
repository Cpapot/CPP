/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:08:15 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 21:07:40 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.h"

int	error(string error_written)
{
	cout << RED << error_written << WHITE << endl;
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
	cout << GREEN << "Job done 👍" << WHITE << endl;
	return (0);
}

