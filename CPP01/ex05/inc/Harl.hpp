/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:57:11 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/06 18:49:15 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define	HARL_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <map>

# define RESET		"\001\x1b[0m\002"
# define BLACK		"\001\x1b[30m\002"
# define RED		"\001\x1b[31m\002"
# define GREEN		"\001\x1b[32m\002"
# define YELLOW		"\001\x1b[33m\002"
# define BLUE		"\001\x1b[34m\002"
# define MAGENTA	"\001\x1b[35m\002"
# define CYAN		"\001\x1b[36m\002"
# define WHITE		"\001\x1b[37m\002"

using namespace std;

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(string level);
};

#endif
