/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:36:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 14:47:31 by cpapot           ###   ########.fr       */
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
	WrongCat(const WrongCat &cpy);

	WrongCat const		&operator=(const WrongCat &src);


};

#endif
