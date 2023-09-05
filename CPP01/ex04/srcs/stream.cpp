/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:55:12 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/05 15:29:47 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stream.hpp"

//constructor
stream::stream(char *path)
{
	std::string		out_path = std::string(path) + std::string(".replace");
	in.open(path, std::ifstream::in);
	if (in)
		out.open(out_path.c_str(), std::ofstream::out);
	end = false;
}


//destructor
stream::~stream()
{
	in.close();
	out.close();
}

//getters
std::string	stream::getReadLine(void)
{
	return (line);
}

bool	stream::isFinish(void)
{
	return (end);
}

void	stream::replaceInLine(char *s1, char *s2)
{
	size_t	pos;
	//size_t	min_pos = 0;
	std::string	tmp2("");
	std::string	tmp;

	tmp = line;
	pos = line.find(s1);
	while (pos != std::string::npos)
	{
		pos = line.find(s1);
		line.replace(pos, std::string(s2));
		/*tmp.erase(pos, line.size() - pos);
		tmp = tmp + std::string(s2);
		line.erase(0, pos + std::string(s1).size());
		tmp2 += tmp;
		tmp = line;
		pos = line.find(s1);*/
	}
	//line = tmp2;
}

int	stream::checkStream(void)
{
	if (!in)
		return (1);
	if (!out)
		return (2);
	return (0);
}

void	stream::readLine(void)
{
	if (!getline(in, line))
		end = true;
}

void	stream::writeLine(void)
{
	out.write(line.c_str(), line.size());
	std::cout << line << std::endl;
}
