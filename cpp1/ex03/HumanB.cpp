/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:52:17 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 18:32:11 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _gun(NULL)
{
	std::cout << "Creation of Human B named: " << _name << std::endl;
	std::cout << _name << " has no weapon yet" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destruction of Human B named: " << _name << std::endl;
}

void	HumanB::attack() const
{
	if (_gun)
		std::cout << _name << "attacks with their " << _gun << std::endl;
	else
		std::cout << _name << " wanted to attack but has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &gun)
{
	_gun = &gun;
	std::cout << _name << " is now using a " << _gun << std::endl;
}
