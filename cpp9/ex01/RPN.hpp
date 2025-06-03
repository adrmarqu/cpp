/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:52:07 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/10 14:21:38 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>

enum TYPE
{
	NUM,
	TOKEN,
	ERROR
};

class RPN
{
	public:

		RPN(char const *input);
		RPN(char **input);
		~RPN();

	private:

		std::stack<int>	_stack;
		int				_token;

		RPN();
		RPN(RPN const &other);
		RPN	&operator=(RPN const &other);

		
		TYPE	whatIsThis(std::string const &str);
		void	calculate();
		bool	isToken(int c) const;

		void	handleProgram(std::string const &str);
		void	end(std::string const &str) const;

		bool	OverflowPlus(int a, int b) const;
		bool	OverflowMinus(int a, int b) const;
		bool	OverflowMult(int a, int b) const;
};

#endif
