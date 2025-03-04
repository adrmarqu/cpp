/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:24:48 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/20 13:33:09 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void	swap(T &a, T &b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template<typename T> T	min(T &a, T &b)
{
	return a < b ? a : b;
}

template<typename T> T	max(T &a, T &b)
{
	return a > b ? a : b;
}

#endif
