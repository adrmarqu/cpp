/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 11:23:41 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	/* Test ClapTrap */
    
	std::cout << "\n--- Testing ClapTrap ---\n" << std::endl;
	ClapTrap clap1("Clappy");
	ClapTrap clap2("ClapTwin");

	clap1.attack("TargetA");
	clap1.takeDamage(5);
	clap1.beRepaired(3);

	clap2.attack("TargetB");
	clap2.takeDamage(20);
	clap2.beRepaired(10);

	/* Test ScavTrap */
    
	std::cout << "\n--- Testing ScavTrap ---\n" << std::endl;
	ScavTrap scav1("Scavy");
	ScavTrap scav2("ScavClone");

	scav1.attack("EnemyA");
	scav1.takeDamage(30);
	scav1.beRepaired(15);
	scav1.guardGate();

	scav2.attack("EnemyB");
	scav2.takeDamage(70);
	scav2.beRepaired(20);
	scav2.guardGate();

	/* Test FragTrap */
	
	std::cout << "\n--- Testing FragTrap ---\n" << std::endl;
	FragTrap frag1("Fraggy");
	FragTrap frag2("Fragster");

	frag1.attack("OpponentA");
	frag1.takeDamage(50);
	frag1.beRepaired(25);
	frag1.highFivesGuys();

	frag2.attack("OpponentB");
	frag2.takeDamage(80);
	frag2.beRepaired(40);
	frag2.highFivesGuys();

	/* Constructor and assignment operator testing */
	
	std::cout << "\n--- Testing Constructors and Assignment ---\n" << std::endl;
	ScavTrap scav3(scav1);
	scav3.attack("CopiedEnemy");

	FragTrap frag3 = frag1;
	frag3.attack("AssignedEnemy");

	std::cout << "\n--- Testing Destructors ---\n" << std::endl;
    
	return 0;
}
