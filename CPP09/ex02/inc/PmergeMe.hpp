/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 05:50:14 by cpapot            #+#    #+#             */
/*   Updated: 2024/03/12 14:54:09 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <ctime>
# include <iostream>
# include <sys/time.h>
# include <cstdlib>
# include <vector>
# include <algorithm>
# include <list>
# include <utility>
# include <deque>

class PmergeMe
{
private:
	std::vector<int>	_container;

	long long			getTime();
public:
	void				printData(std::string info, std::vector<int> data);
	void				sort(void);

	template <typename T>
	T	mergeInsertion(T base);

	PmergeMe(int argc, char **argv);
	~PmergeMe(void);
};

#endif
