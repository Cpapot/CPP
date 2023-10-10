/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/10 20:45:48 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ScalarConverter.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string token = "-";

	bool	isminus = (token.at(0) == '-');

	std::cout << isminus << " " << token << std::endl;
	token.erase(0, 1);
	isminus = token.find_first_of("8");

}
