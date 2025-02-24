/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:05:06 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/18 14:11:37 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
		return std::cout << "You need an argument!" << std::endl, 1;
	else if (ac > 2)
		return std::cout << "You need only one argument!" << std::endl, 1;
	
	ScalarConverter::convert(av[1]);
	
	return 0;
}
