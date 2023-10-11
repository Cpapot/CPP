/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/11 12:23:50 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>

int main()
{
	std::string token = "2147483648";
	int i;
	try
	{
		i = convertInt(token);
	}
	catch(std::out_of_range const &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << i << std::endl;
}
