/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:53:20 by cpapot            #+#    #+#             */
/*   Updated: 2024/02/29 05:58:11 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <cstdlib>
# include <iostream>
# include <vector>

bool					isSign(char s);
bool					parseArg(std::string input);
void					computeRes(std::string input);
int						*getNb(std::stack<int>& stack);

#endif
