/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 05:49:43 by cpapot            #+#    #+#             */
/*   Updated: 2024/03/12 14:57:13 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long long PmergeMe::getTime()
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return static_cast<long long>(ts.tv_sec * 1000000000 + ts.tv_nsec);
}

void	PmergeMe::printData(std::string info, std::vector<int> data)
{
	std::cout << info;
	for(size_t i = 0; i != data.size(); i++)
	{
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	if (argc <= 2)
	{
		std::string tmp;
		for (size_t i = 0; argv[1][i]; i++)
		{
			if (argv[1][i] != ' ')
				tmp += argv[1][i];
			else
			{
				std::cout << tmp << std::endl;
				int nb = std::atoi(argv[i]);
				if (nb < 0)
					throw std::invalid_argument("NegativeValue");
				_container.push_back(nb);
				tmp = "";
			}
		}
		if (_container.size() <= 1)
			throw std::invalid_argument("NeedMoreParams");
	}
	else
	{
		for (int i = 1; i != argc; i++)
		{
			int nb = std::atoi(argv[i]);
			if (nb < 0)
				throw std::invalid_argument("NegativeValue");
			_container.push_back(nb);
		}
	}
}

PmergeMe::~PmergeMe(void)
{
}

void		PmergeMe::sort(void)
{
	printData("Before: ", _container);


	long long time = getTime();
	std::vector<int> result = mergeInsertion(_container);
	long long NanoSecondVector = getTime() - time;

	printData("After: ", result);
	std::cout << "Time to process a range of " << _container.size() << " elements with std::vector<int> : " << NanoSecondVector << " ns" << std::endl;

	std::deque<int> data;
	for (size_t i = 0; i != _container.size(); i++)
		data.push_back(_container[i]);

	time = getTime();
	mergeInsertion(data);
	long long NanoSecondDeque = getTime() - time;

	std::cout << "Time to process a range of " << _container.size() << " elements with std::deque<int> : " << NanoSecondDeque << " ns" << std::endl;
}


template <typename T>
T	PmergeMe::mergeInsertion(T base)
{
	T		right, left;

	if (base.size() <= 1)
		return base;

	for(size_t i = 0; i < base.size(); i+= 2)
	{
		if (i + 1 < base.size() && base[i] < base[i + 1])
		{
			right.push_back(base[i + 1]);
			left.push_back(base[i]);
		}
		else if (i + 1 < base.size())
		{
			right.push_back(base[i]);
			left.push_back(base[i + 1]);
		}
		else
			left.push_back(base[i]);
	}

	right = mergeInsertion(right);

	for (size_t i = 0; i != left.size(); i++)
		right.insert(std::upper_bound(right.begin(), right.end(), left[i]), left[i]);

	return right;
}
