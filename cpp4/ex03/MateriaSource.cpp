/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:19:36 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:45:46 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_templates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_templates[i])
				delete this->_templates[i];
			if (other._templates[i])
				this->_templates[i] = other._templates[i]->clone();
			else
				this->_templates[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _templates[i];
}
		
void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_templates[i])
		{
			_templates[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (_templates[i] && _templates[i]->getType() == type)
			return _templates[i]->clone();
	return NULL;
}	
