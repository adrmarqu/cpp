/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:52:58 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:38:05 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
	
Intern::Intern()
{
}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern	&Intern::operator=(Intern const &other)
{
	if (this != &other)
		;
	return *this;
}

Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string const &nameForm, std::string const &targetForm)
{
	static struct
	{
		const char *name;
		Form* (Intern::*createFunc)(const std::string&);
	}
	formCreators[] =
	{
		{"ShrubberyCreationForm", &Intern::createShrubberyCreationForm},
		{"RobotomyRequestForm", &Intern::createRobotomyRequestForm},
		{"PresidentialPardonForm", &Intern::createPresidentialPardonForm}
	};
	for (int i = 0; i < 3; i++)
	{
		if (nameForm == formCreators[i].name)
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return (this->*formCreators[i].createFunc)(targetForm);
		}
	}

	throw Form::InvalidArgumentException();
}

Form *Intern::createShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::createPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target); 
}
