/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 05:58:18 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/29 05:58:30 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int						*getNb(std::stack<int>& stack)
{
	int* tab = new int[2];

	tab[0] = stack.top();
	stack.pop();
	tab[1] = stack.top();
	stack.pop();
	return tab;
}

bool	isSign(char s)
{
	std::string validSign = "+-/*";
	for (size_t i = 0; i != validSign.size(); i++)
	{
		if (validSign[i] == s)
			return true;
	}
	return false;
}

void	computeRes(std::string input)
{
	std::stack<int> stack;
	for ( std::size_t i = 0; i < input.size(); i++ )
	{
		if (std::isdigit(input[i]))
			stack.push(std::atoi(std::string(1, input[i]).c_str()));
		else if (isSign(input[i]))
		{
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			switch (input[i])
			{
				case '+' : stack.push(a + b);
					break;
				case '-' : stack.push(a - b);
					break;
				case '*' : stack.push(a * b);
					break;
				case '/' :
					if (b == 0)
					{
						std::cout << "error" << std::endl;
						return ;
					}
					stack.push(a / b);
					break;
			}
		}
	}
	if (stack.size() == 1 )
		std::cout << stack.top() << std::endl;
	else
		std::cout << "error" << std::endl;
}

bool parseArg(std::string input)
{
	size_t num = 0;
	size_t sign = 0;
	for (size_t i = 0; i != input.size(); i++)
	{
		if (std::isdigit(input[i]))
		{
			num++;
			if(std::isdigit(input[i + 1]))
				return false;
		}
		else if (isSign(input[i]))
			sign++;
		else if (input[i] != ' ')
			return false;
		if (num == sign)
			return false;
	}
	if (num < 1 || sign < 1 || sign != num - 1)
		return false;
	return true;
}
