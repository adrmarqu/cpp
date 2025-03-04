/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:30:12 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 10:46:13 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "[ Cat ] : Constructor " << _type << " created!" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	std::cout << "[ Cat ] : Copy constructor " << _type << " created!" << std::endl;
	*this = toCopy;
}

Cat	&Cat::operator=(Cat const &toAssign)
{
	std::cout << "[ Cat ] : Assignmnet operator called!" << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[ Cat ] : Destroyed " << _type << "!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "[ Cat ] : Miiiiaaauu!!" << std::endl;
}
