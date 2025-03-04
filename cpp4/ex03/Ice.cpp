/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:06:58 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:57:42 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(Ice const &other)
{
	*this = other;
}

Ice	&Ice::operator=(Ice const &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Ice::~Ice()
{

}

AMateria	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
