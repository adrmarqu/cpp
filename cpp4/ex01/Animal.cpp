/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:07:20 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 10:46:36 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Ditto")
{
	std::cout << "[ Animal ] : Constructor " << _type << " created!" << std::endl;
}

Animal::Animal(Animal const &toCopy): _type(toCopy._type)
{
	std::cout << "[ Animal ] : Copy constructor " << _type << " created!" << std::endl;
}

Animal	&Animal::operator=(Animal const &toAssign)
{
	std::cout << "[ Animal ] : Assignment operator called!" << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "[ Animal ] : Destroyed " << _type << "!" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "[ Animal ] : Pika Pika Pikachuuuuuu??" << std::endl;
}

std::string	Animal::getType() const
{
	return _type;
}
