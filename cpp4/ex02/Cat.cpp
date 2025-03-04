/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:30:12 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/31 12:58:55 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): _brain(new Brain())
{
	_type = "Cat";
	std::cout << "[ Cat ] : Constructor " << _type << " created!" << std::endl;
}

Cat::Cat(Cat const &toCopy): _brain(new Brain(*toCopy._brain))
{
	_type = "Cat";
	std::cout << "[ Cat ] : Deep copy constructor " << _type << " created!" << std::endl;
}

Cat	&Cat::operator=(Cat const &toAssign)
{
	std::cout << "[ Cat ] : Assignmnet operator called!" << std::endl;
	if (this != &toAssign)
	{
		_type = toAssign._type;
		*_brain = *toAssign._brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "[ Cat ] : Destroyed " << _type << "!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "[ Cat ] : Miiiiaaauu!!" << std::endl;
}

void	Cat::addIdea(std::string const &str, int idx, int length)
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

void	Cat::printIdeas(int start, int end) const
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

void	Cat::_printOneIdea(int idx) const
{
	std::cout << "[ Cat ] : My " << idx << " idea is " << _brain->getIdea(idx) << std::endl;
}
