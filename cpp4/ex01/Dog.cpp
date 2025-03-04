/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:44:24 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/31 13:13:54 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "[ Dog ] : Constructor " << _type << " created!" << std::endl;
}

Dog::Dog(const Dog &toCopy): _brain(new Brain(*toCopy._brain))
{
	_type = "Dog";
	std::cout << "[ Dog ] : Deep Copy constructor " << _type << " created!" << std::endl;
}

Dog	&Dog::operator=(const Dog &toAssign)
{
	std::cout << "[ Dog ] : Assignmnet operator called!" << std::endl;
	if (this != &toAssign)
	{
		_type = toAssign._type;
		*_brain = *toAssign._brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "[ Dog ] : Destroyed " << _type << "!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "[ Dog ] : Guau guau!!!" << std::endl;
}

void	Dog::addIdea(std::string const &str, int idx, int length)
{
	if (idx < 0)
		idx = 0;
	else if (idx > 99)
		idx = 99;
	if (length < 1)
		return ;
	for (int i = 0; i < length && idx < 100; i++)
		_brain->setIdea(str, idx++);
}

void	Dog::printIdeas(int start, int end) const
{
	if (start < 0)
		start = 0;
	else if (start > 99)
		start = 99;
	if (end < 0 || end < start || end > 99)
		end = 99;
	while (start <= end)
		_printOneIdea(start++);
}

void	Dog::_printOneIdea(int idx) const
{
	std::cout << "[ Dog ] : My " << idx << " idea is " << _brain->getIdea(idx) << std::endl;
}
