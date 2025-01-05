/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:51:51 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 18:48:24 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Created weapon called: " << _type << std::endl;
}

Weapon::Weapon() : _type("bare hands")
{
	std::cout << "Creaed constructor without weapon" << std::endl;
}

Weapon::~Weapon()
{	
	std::cout << "Destructor for " << _type << std::endl;
}

std::string const	&Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	std::cout << "Changing weapon from " << _type;
	_type = type;
	std::cout << " to " << _type << std::endl;
}

std::ostream	&operator<<(std::ostream &flux, Weapon const &gun)
{
	flux << gun.getType();
	return (flux);
}
