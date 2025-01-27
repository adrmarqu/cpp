/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:05 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 13:23:36 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DT_Default_clap_name")
{
	std::cout << "DiamondTrap : Defaut contructor called" << std::endl;
	_name = "DT_Default";
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap : Contructor " << name << " called" << std::endl;
	_name = name;
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(DiamondTrap const &toCopy)
{
	std::cout << "DiamondTrap : Copy contructor " << toCopy._name << " called" << std::endl;
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor " << _name << " called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &toAssign)
{
	std::cout << "DiamondTrap : Assignment operator called" << std::endl;
	if (this != &toAssign)
	{
		ClapTrap::_name = toAssign._name + "_clap_name";
		_name = toAssign._name;
		_health = toAssign._health;
		_energy = toAssign._energy;
		_attack = toAssign._attack;
	}
	return *this;
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap : Name: " << _name << " --- ClapTrap name: " << ClapTrap::_name << std::endl;
}
