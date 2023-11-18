/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:36:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 16:25:41 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCATHPP
# define WRONGCATHPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	~WrongCat();
	WrongCat::WrongCat(const WrongCat &cpy);
	WrongCat const		&WrongCat::operator=(const WrongCat &src);
};

#endif
