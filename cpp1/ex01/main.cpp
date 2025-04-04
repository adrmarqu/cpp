/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:38:56 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 11:07:54 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int	n = 6;

	if (n < 1)
		return std::cout << "There are no zombies" << std::endl, 0;

	std::cout << std::endl << "----- New horde of " << n <<  " zombies -----";
	std::cout << std::endl << std::endl;
	
	Zombie	*horde = zombieHorde(n, "Frederic");

	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	
	std::cout << std::endl;

	return 0;
}
