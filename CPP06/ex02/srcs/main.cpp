/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/02 12:31:19 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"
#include <cstdlib>

Base* generate(void)
{
	Base *result;
	srand(time(0));
	switch (rand() % 3)
	{
	case 0:
		result = new C;
		std::cout << "[generate] C created" << std::endl;
		break;

	case 1:
		result = new B;
		std::cout << "[generate] B created" << std::endl;
		break;

	case 2:
		result = new A;
		std::cout << "[generate] A created" << std::endl;
		break;
	}
	return (result);
}

void	id_ref(Base& p, int step)
{
	try
	{
		switch (step)
		{
		case 0:
			dynamic_cast<A&>(p);
			std::cout << "[identify (Base&)] Base is an A base" << std::endl;
			break;
		case 1:
			dynamic_cast<B&>(p);
			std::cout << "[identify (Base&)] Base is an B base" << std::endl;
			break;
		case 2:
			dynamic_cast<C&>(p);
			std::cout << "[identify (Base&)] Base is an C base" << std::endl;
			break;

		default:
			std::cout << "[identify (Base&)] Base not found" << std::endl;
			break;
		}
	}
	catch(const std::exception& e)
	{
		id_ref(p, step + 1);
	}
}

void identify(Base& p)
{
	id_ref(p, 0);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "[identify (Base*)] Base is an A base" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "[identify (Base*)] Base is an B base" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "[identify (Base*)] Base is an C base" << std::endl;
	else
		std::cout << "[identify (Base*)] Cant find type" << std::endl;
}

int main()
{
	Base	*test = generate();

	identify(test);
	identify((*test));
}
