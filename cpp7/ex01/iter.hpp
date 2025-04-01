/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:37:07 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/03/24 12:06:57 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, std::size_t length, void (*f)(T &))
{
	if (!array || !f || !length)
		return ;
	for (std::size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	iter(T const *array, std::size_t length, void (*f)(T const &))
{
	if (!array || !f || !length)
		return ;
	for (std::size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif
