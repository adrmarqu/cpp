/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:55:52 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/18 13:25:42 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

enum Type
{
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
	NAN_VAL,
	INF,
	INVALID
};

class ScalarConverter
{
	public:

		static void	convert(std::string str);

	private:

		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter	&operator=(ScalarConverter const &other);
		~ScalarConverter();
};

#endif
