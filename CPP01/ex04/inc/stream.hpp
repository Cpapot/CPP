/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:27:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/04 17:05:52 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_HPP
# define STREAM_HPP

#include "lib.h"

class stream
{
private:
	std::ofstream	out;
	std::ifstream	in;
	std::string		line;
	bool		end;
public:
	void	readLine(void);
	void	writeLine(void);
	int		checkStream(void);
	bool	isFinish(void);
	void	replaceInLine(char *s1, char *s2);
	std::string	getReadLine(void);
	stream(char *path);
	~stream();
};

#endif
