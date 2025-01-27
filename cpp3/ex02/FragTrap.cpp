/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:05 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 13:27:32 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FT_Default")
{
	std::cout << "FragTrap : Defaut contructor called" << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap : Contructor " << name << " called" << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
	
}

FragTrap::FragTrap(FragTrap const &toCopy)
{
	std::cout << "FragTrap : Copy contructor " << toCopy._name << " called" << std::endl;
	*this = toCopy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor " << _name << " called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &toAssign)
{
	std::cout << "FragTrap : Assignment operator called" << std::endl;
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_health = toAssign._health;
		_energy = toAssign._energy;
		_attack = toAssign._attack;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap : " << _name << " wants to do a high five!" << std::endl;
}
