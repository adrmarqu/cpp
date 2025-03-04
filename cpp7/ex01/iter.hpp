/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:37:07 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/03/04 12:29:22 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstdlib>

template<typename T, typename F>
void	iter(T *add, int const &length, F f)
{
	if (!add || !f || length <= 0)
		return ;
	for (int i = 0; i < length; i++)
		(*f)(add[i]);
}

#endif
