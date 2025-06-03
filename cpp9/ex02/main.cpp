/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:40:37 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/21 14:36:01 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		return std::cerr << "Error: no input" << std::endl, 1;

	try
	{
		if (ac == 2)
			PmergeMe	pm(av[1]);
		else
			PmergeMe	pm(av);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
