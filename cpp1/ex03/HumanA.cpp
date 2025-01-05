/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:52:11 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 18:48:51 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) : _name(name), _gun(gun)
{
	std::cout << "Creation of Human A named: " << _name << std::endl;
	std::cout << _name << " has a " << _gun << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destruction of Human A named: " << _name << std::endl;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _gun << std::endl;
}
