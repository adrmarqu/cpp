/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 13:20:29 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n--- Testing DiamondTrap ---\n" << std::endl;

	/* Crear un objeto DiamondTrap */
	
	DiamondTrap diamond("DiamondBoss");

	/* Probar los métodos heredados y propios de DiamondTrap */
    
	diamond.attack("EnemyA");
	diamond.takeDamage(50);
	diamond.beRepaired(25);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	/* Probar la creación y destrucción */
	
	std::cout << "\n--- Part 2 ---\n" << std::endl;

	DiamondTrap diamond2("DiamondMini");
	diamond2.attack("EnemyB");
	diamond2.takeDamage(30);
	diamond2.beRepaired(20);
	diamond2.whoAmI();
	
	std::cout << "\n--- End of Program ---\n" << std::endl;
	
	return 0;
}

