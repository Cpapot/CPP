/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:49:36 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 14:37:35 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
using namespace std;

class Zombie
{
private:
	string	name;
public:
	void	announce(void);
	void	setName(string name);
	string	getName(void);
	~Zombie(void);
};

#endif
