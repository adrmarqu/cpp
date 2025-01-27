/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:05 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 10:55:45 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("ST_Default")
{
	std::cout << "ScavTrap : Defaut contructor called" << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap : Contructor " << name << " called" << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
	
}

ScavTrap::ScavTrap(ScavTrap const &toCopy)
{
	std::cout << "ScavTrap : Copy contructor " << toCopy._name << " called" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor " << _name << " called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &toAssign)
{
	std::cout << "ScavTrap : Assignment operator called" << std::endl;
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_health = toAssign._health;
		_energy = toAssign._energy;
		_attack = toAssign._attack;
	}
	return *this;
}

static int	checkST(int health, int energy, std::string name)
{
	if (!health)
		return std::cout << "Bro! ScavTrap " << name << " is dead." << std::endl, 1;
	if (!energy)
		return std::cout << "WTF! ScavTrap " << name << " is empty." << std::endl, 1;
	return 0;
}

void	ScavTrap::attack(const std::string& target)
{
	if (checkST(_health, _energy, _name))
		return ;

	_energy--;

	std::cout << "ScavTrap " << _name << " has attacked " << target << ", causing ";
	std::cout << _attack << " points of pain!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
