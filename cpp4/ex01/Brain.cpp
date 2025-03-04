/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:19:28 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/31 12:59:54 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[ Brain ] : Constructor Brain created!" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "There is no idea here";
}

Brain::Brain(Brain const &toCopy)
{
	std::cout << "[ Brain ] : Copy constructor Brain created!" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = toCopy._ideas[i];
}

Brain	&Brain::operator=(Brain const &toAssign)
{
	std::cout << "[ Brain ] : Assignment operator called!" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = toAssign._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "[ Brain ] : Destroyed Brain!" << std::endl;
}

void	Brain::setIdea(std::string const &str, int idx)
{
	if (idx < 0 || idx > 99)
		std::cout << "The idea " << idx << ": '" << str << "' is outside the range (0-99)";
	else
		_ideas[idx] = str;
}

std::string	&Brain::getIdea(int idx)
{
	if (idx < 0)
		idx = 0;
	else if (idx > 99)
		idx = 99;
	return _ideas[idx];
}
