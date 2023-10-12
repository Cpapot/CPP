/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/12 13:31:30 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
	Data	DataStruct;

	srand(time(0));
	DataStruct.id = rand();
	DataStruct.name = "STRUCT";

	std::cout << "name: " << DataStruct.name << "	id: " << DataStruct.id << std::endl;
	uintptr_t raw = Serializer::serialize(&DataStruct);
	std::cout << raw << std::endl;
	Data	*NewStruct = Serializer::deserialize(raw);
	std::cout << "name: " << NewStruct->name << "	id: " << NewStruct->id << std::endl;
}
