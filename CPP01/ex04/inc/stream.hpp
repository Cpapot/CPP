/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:27:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/05 20:34:50 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_HPP
# define STREAM_HPP

#include "lib.h"

class stream
{
private:
	ofstream	out;
	ifstream	in;
	string		line;
	bool		end;
public:
	void	readLine(void);
	void	writeLine(void);
	int		checkStream(void);
	bool	isFinish(void);
	void	replaceInLine(char *s1, char *s2);
	string	getReadLine(void);
	stream(char *path);
	~stream();
};

#endif
