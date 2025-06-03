/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:28:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/06 18:40:04 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <climits>

Span::Span(unsigned int N): _length(N)
{}

Span::~Span()
{}

Span::Span(Span const &other): _length(other._length), _span(other._span)
{}

Span	&Span::operator=(Span const &other)
{
	if (this != &other)
	{
		_length = other._length;
		_span = other._span;
	}
	return *this;
}

void	Span::addNumber(int nbr)
{
	if (_span.size() >= _length)
		throw std::length_error("You reached the max size");
	std::cout << nbr << std::endl;
	_span.push_back(nbr);
}

void	Span::addMultipleNumbers(Mult mult, int mode, unsigned int size)
{
	int	range = static_cast<int>(mult);

	for (unsigned int i = 0; i < size; i++)
		addNumber(generateRandom(range, mode));
}

int	Span::generateRandom(int range, int mode)
{
	int	nbr = 0;

	if (mode == 0)
		nbr = std::rand() % (2 * range + 1) - range;
	else if (mode == 1)
		nbr = std::rand() % (range + 1);
	else if (mode == -1)
		nbr = -(std::rand() % (range + 1));
	return nbr;
}

int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::invalid_argument("You need at least 2 elements");

	int diff = std::abs(_span[0] - _span[1]);

	for (int i = 0; i < static_cast<int>(_span.size()); i++)
	{
		for (int j = 0; j < static_cast<int>(_span.size()); j++)
		{
			if (i == j)
				continue ;
			int	tmp = std::abs(_span[i] - _span[j]);
			if (tmp < diff)
				diff = tmp;
		}
	}
	return diff;
}

int	Span::longestSpan()
{
	int	min = INT_MAX;
	int	max = INT_MIN;

	if (_span.size() < 2)
		throw std::invalid_argument("You need at least 2 elements");

	for (int i = 0; i < static_cast<int>(_span.size()); i++)
	{
		if (min > _span[i])
			min = _span[i];
		if (max < _span[i])
			max = _span[i];
	}
	return max - min;
}
