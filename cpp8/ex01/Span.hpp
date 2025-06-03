/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:28:18 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/06 18:25:22 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

enum Mult
{
	TEN = 10,
	HUNDRED = 100,
	THOUSAND = 1000,
	TENTHOUSAND = 10000,
	HUNDREDTHOUSAND = 100000
};

class Span
{
	public:

		Span(unsigned int N);
		~Span();
		
		Span(Span const &other);
		Span	&operator=(Span const &other);

		void	addNumber(int nbr);
		void	addMultipleNumbers(Mult mult, int mode, unsigned int size);

		int	shortestSpan();
		int	longestSpan();

	private:

		unsigned int		_length;
		std::vector<int>	_span;

		int	generateRandom(int range, int mode);
};

#endif
