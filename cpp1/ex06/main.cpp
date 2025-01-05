/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:30 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/02 17:13:35 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	if (ac != 2 || !av[1])
		return std::cout << "./Harl + level --> (DEBUG, INFO, WARNING, ERROR)" << std::endl, 1;

	Harl	harl;

	harl.complain(av[1]);
	return 0;
}
