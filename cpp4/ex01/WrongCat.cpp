/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:30:12 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 11:00:52 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "[ WrongCat ] : Constructor " << _type << " created!" << std::endl;
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	std::cout << "[ WrongCat ] : Copy constructor " << _type << " created!" << std::endl;
	*this = toCopy;
}

WrongCat	&WrongCat::operator=(WrongCat const &toAssign)
{
	std::cout << "[ WrongCat ] : Assignmnet operator called!" << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[ WrongCat ] : Destroyed " << _type << "!" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "[ WrongCat ] : Miiiiaaauu!!" << std::endl;
}
