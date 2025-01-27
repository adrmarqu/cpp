/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/15 17:38:48 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define VOID "DIANA"

int	main(void)
{
	std::cout << std::endl << "Constructors" << std::endl << std::endl;
	
	ClapTrap	a;
	ClapTrap	b("Juan");
	ClapTrap	c("Alberto");
	ClapTrap	d = ClapTrap(c);

	std::cout << std::endl << std::endl << "Attacks" << std::endl << std::endl;

	for (int i = 0; i < 15; i++)
		b.attack(VOID);
	d.attack(VOID);
	a.attack(VOID);

	std::cout << std::endl << std::endl << "Recibir y reparar" << std::endl << std::endl;
	
	b.beRepaired(3);
	for (int i = 1; i < 8; i++)
	{
		c.takeDamage(i);
		c.beRepaired(i - 1);
	}

	std::cout << std::endl << std::endl << "Assignement operator" << std::endl << std::endl;

	a.beRepaired(5);
	a = b;
	a.beRepaired(5);
	
	std::cout << std::endl << std::endl << "Destructors" << std::endl << std::endl;

	return 0;
}
