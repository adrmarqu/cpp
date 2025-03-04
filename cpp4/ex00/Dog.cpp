/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:44:24 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 10:46:23 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "[ Dog ] : Constructor " << _type << " created!" << std::endl;
}

Dog::Dog(const Dog &toCopy)
{
	std::cout << "[ Dog ] : Copy constructor " << _type << " created!" << std::endl;
	*this = toCopy;
}

Dog	&Dog::operator=(const Dog &toAssign)
{
	std::cout << "[ Dog ] : Assignmnet operator called!" << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[ Dog ] : Destroyed " << _type << "!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "[ Dog ] : Guau guau!!!" << std::endl;
}
