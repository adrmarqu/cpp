/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:51:36 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/06 18:52:58 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(T const &container, int value)
{
	typename T::const_iterator	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Element not found");
	return it;
}

#endif
