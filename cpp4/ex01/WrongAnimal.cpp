/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:07:20 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 10:59:17 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Ditto")
{
	std::cout << "[ WrongAnimal ] : Constructor " << _type << " created!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy): _type(toCopy._type)
{
	std::cout << "[ WrongAnimal ] : Copy constructor " << _type << " created!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &toAssign)
{
	std::cout << "[ WrongAnimal ] : Assignment operator called!" << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[ WrongAnimal ] : Destroyed " << _type << "!" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[ WrongAnimal ] : Pika Pika Pikachuuuuuu??" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}
