/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:00:26 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/24 15:43:19 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>

template<typename T>
class Array
{
	public:

		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(Array const &other);
		Array<T>	&operator=(Array const &other);
		~Array<T>();

		T	&operator[](unsigned int i);

		unsigned int	size() const;

	private:

		unsigned int	_length;
		T				*_data;

};

#include "Array.tpp"

#endif
