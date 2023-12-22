/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:21:47 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/22 17:27:21 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
	MutantStack(void) { };
	MutantStack(const MutantStack &cpy) {*this = cpy;}
	~MutantStack(void) { };

	MutantStack const &operator=(const MutantStack &src)
	{
		std::stack<T, Container>::operator=(src);
		return *this;
	}

	typedef typename Container::iterator	iterator;

	iterator	begin()		{return this->c.begin();}
	iterator	end()		{return this->c.end();}
};

#endif
