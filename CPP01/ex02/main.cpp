/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:39:17 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 16:53:19 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
using namespace std;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string&	stringREF = str;

	cout <<  &str << endl;
	cout << stringPTR << endl;
	cout << &stringREF << endl << endl;

	cout << str << endl;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
}
