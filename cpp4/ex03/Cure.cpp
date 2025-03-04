/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:06:58 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 14:04:19 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

Cure::Cure(): AMateria("cure")
{

}

Cure::Cure(Cure const &other)
{
	*this = other;
}

Cure	&Cure::operator=(Cure const &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cure::~Cure()
{

}

AMateria	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
