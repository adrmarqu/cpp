/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:29:08 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/15 17:35:14 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _health(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "Constructor named " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called (" << _name << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy): _name(toCopy._name), _health(toCopy._health), _energy(toCopy._energy), _attack(toCopy._attack)
{
	std::cout << "Copy constructor named " << toCopy._name << " created" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_health = toAssign._health;
		_energy = toAssign._energy;
		_attack = toAssign._attack;
		std::cout << "ClapTrap assignement called" << std::endl;
	}
	return *this;
}

static int	check(int health, int energy, std::string name)
{
	if (!health)
		return std::cout << "ClapTrap " << name << " do not have more hit points." << std::endl, 1;
	if (!energy)
		return std::cout << "ClapTrap " << name << " do not have more energy points." << std::endl, 1;
	return 0;
}

void	ClapTrap::attack(const std::string& target)
{
	if (check(_health, _energy, _name))
		return ;

	_energy--;
	
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
	std::cout << _attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_health)
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}

	_health -= amount;
	if (_health < 0)
		_health = 0;
	
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!";
	std::cout << " ClapTrap now has " << _health << " points of health left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (check(_health, _energy, _name))
		return ;
	
	_energy--;
	_health += amount;
	
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!";
	std::cout << " ClapTrap now has " << _health << " points of health left." << std::endl;
}
