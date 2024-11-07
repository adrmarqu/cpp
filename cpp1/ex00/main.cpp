/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:27:10 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/11/07 09:36:08 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << std::endl << "----- New zombie -----" << std::endl << std::endl;
	Zombie	*z = newZombie("Siri");
	if (z)
	{
		z->announce();
		delete z;
	}

	std::cout << std::endl << "----- Random chump -----" << std::endl << std::endl;
	randomChump("Alexa");

	return (0);
}
