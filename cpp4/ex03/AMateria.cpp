/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:57:03 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:53:18 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
	
}

AMateria::AMateria(): _type("Default")
{
	
}

AMateria::AMateria(AMateria const &other): _type(other._type)
{

}

AMateria	&AMateria::operator=(AMateria const &other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}

AMateria::~AMateria()
{
	
}
		
std::string const	&AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* uses AMateria on " << target.getName() << " *" << std::endl;
}
