/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:07:15 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/18 14:21:58 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

typedef unsigned long uintptr_t;

struct Data
{
	int 		id;
	std::string	name;
};

class Serializer
{
	public:

		static uintptr_t	serialize(Data* ptr);
		static Data			*deserialize(uintptr_t raw);

	private:

		Serializer();
		Serializer(Serializer const &other);
		Serializer	&operator=(Serializer const &other);
		~Serializer();
};

#endif
