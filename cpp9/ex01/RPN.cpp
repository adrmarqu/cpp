/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:56:19 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/10 14:21:44 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <limits>
#include <cstdlib>

RPN::RPN()
{
	throw std::runtime_error("You can not init RPN without arguments");
}

RPN::RPN(RPN const &other): _stack(other._stack), _token(0)
{}

RPN	&RPN::operator=(RPN const &other)
{
	if (this != &other)
	{
		_stack = other._stack;
		_token = 0;
	}
	return *this;
}

RPN::~RPN()
{}

RPN::RPN(char **input)
{
	std::string	err;

	for (int i = 1; input[i]; i++)
	{
		if (i > 1)
			err += " ";
		err += input[i];
		handleProgram(input[i]);
	}
	end(err);
}

RPN::RPN(char const *input)
{
	std::string			str(input), val;
	std::istringstream	iss(str);

	while (iss >> val)
		handleProgram(val);
	end(input);
}

void	RPN::end(std::string const &str) const
{
	if (_stack.size() != 1)
		throw std::invalid_argument("bad input => " + str);
	std::cout << _stack.top() << std::endl;
}

void	RPN::handleProgram(std::string const &str)
{
	TYPE	type = whatIsThis(str);

	if (type == NUM)
		_stack.push(_token);
	else if (type == TOKEN && _stack.size() > 1)
		calculate();
	else
		throw std::invalid_argument("bad input => " + str);
}

TYPE	RPN::whatIsThis(std::string const &str)
{
	if (str.size() > 1)
	{
		if (str.size() == 2)
		{
			if (str[0] != '+' && str[0] != '-')
				return ERROR;
			else if (!std::isdigit(str[1]))
				return ERROR;
		}
		else
			return ERROR;
	}

	_token = std::atoi(str.c_str());

	if (_token == 0 && str != "0")
	{
		if (!isToken(str[0]))
			return ERROR;
		_token = str[0];
		return TOKEN;
	}
	else if (_token > -10 && _token < 10)
		return NUM;
	else
		return ERROR;
}

bool	RPN::isToken(int c) const
{
	std::string	set = "+-*/";

	for (int i = 0; i < static_cast<int>(set.size()); i++)
		if (c == set[i])
			return true;
	return false;
}

void	RPN::calculate()
{
	int	a, b, res;

	b = _stack.top(); _stack.pop();
	a = _stack.top(); _stack.pop();

	switch (_token)
	{
		case '+':
			if (OverflowPlus(a, b))
				throw std::invalid_argument("The result overflows an int");
			res = a + b;
			break ;
		case '-':
			if (OverflowMinus(a, b))
				throw std::invalid_argument("The result overflows an int");
			res = a - b;
			break ;
		case '*':
			if (OverflowMult(a, b))
				throw std::invalid_argument("The result overflows an int");
			res = a * b;
			break ;
		default:
			if (b == 0)
				throw std::invalid_argument("You can not divide with 0");
			if (a == std::numeric_limits<int>::min() && b == -1)
				throw std::invalid_argument("The result overflows an int");
			res = a / b;
			break ;
	}
	_stack.push(res);
}

bool	RPN::OverflowPlus(int a, int b) const
{
	if (b > 0)
		return a > std::numeric_limits<int>::max() - b;
	else
		return a < std::numeric_limits<int>::min() - b;
}

bool	RPN::OverflowMinus(int a, int b) const
{
	if (b > 0)
		return a < std::numeric_limits<int>::min() + b;
	else
		return a > std::numeric_limits<int>::max() + b;
}

bool	RPN::OverflowMult(int a, int b) const
{
	if (a == 0 || b == 0)
		return false;

	if (a > 0)
	{
		if (b > 0)
			return a > std::numeric_limits<int>::max() / b;
		else
			return b < std::numeric_limits<int>::min() / a;
	}
	else
	{
		if (b > 0)
			return a < std::numeric_limits<int>::min() / b;
		else
			return a != 0 && b < std::numeric_limits<int>::max() / a;
	}
}
