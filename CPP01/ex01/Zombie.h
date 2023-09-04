/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:10:27 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 15:12:00 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "Zombie.hpp"

# define RESET		"\001\x1b[0m\002"
# define BLACK		"\001\x1b[30m\002"
# define RED		"\001\x1b[31m\002"
# define GREEN		"\001\x1b[32m\002"
# define YELLOW		"\001\x1b[33m\002"
# define BLUE		"\001\x1b[34m\002"
# define MAGENTA	"\001\x1b[35m\002"
# define CYAN		"\001\x1b[36m\002"
# define WHITE		"\001\x1b[37m\002"

Zombie* zombieHorde(int N, std::string name);

#endif
