/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:38:56 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/11/07 10:08:56 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int	n = 5;

	if (n < 1)
	{
		std::cout << "There are no zombies" << std::endl;
		return (0);
	}
	std::cout << std::endl << "----- New horde of " << n <<  " zombies -----";
	std::cout << std::endl << std::endl;
	
	Zombie	*horde = zombieHorde(n, "Frederic");

	if (!horde)
		return (1);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;

	std::cout << std::endl;

	return (0);
}
