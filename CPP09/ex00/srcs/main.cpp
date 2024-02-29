/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/29 04:11:26 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	std::string db_name = "data.csv";
	try
	{
		BitcoinExchange	btc(db_name);
		btc.checkInput(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " <<  e.what() << '\n';
	}

}
