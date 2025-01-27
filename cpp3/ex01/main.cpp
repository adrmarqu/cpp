/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 10:36:39 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    /* Test ClapTrap */

	std::cout << "\n--- Testing ClapTrap ---\n" << std::endl;
	ClapTrap clap1("Clappy");
	ClapTrap clap2(clap1);
    
	clap1.attack("target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);

	clap1.attack("target2");
	clap1.takeDamage(15);
	clap1.beRepaired(5);

    /* Test ScavTrap */
    
	
	std::cout << "\n--- Testing ScavTrap ---\n" << std::endl;
	ScavTrap scav1("Scavy");
	ScavTrap scav2(scav1);
    
	scav1.attack("enemy1");
	scav1.takeDamage(25);
	scav1.beRepaired(10);
    
	scav1.guardGate();
	
	scav1.attack("enemy2");
	scav1.takeDamage(90);
	scav1.beRepaired(10);

    /* Assignment operator test */
    
	std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;
	ScavTrap scav3("Temporary");
	scav3 = scav1;
	scav3.attack("final_target");

    return 0;
}
