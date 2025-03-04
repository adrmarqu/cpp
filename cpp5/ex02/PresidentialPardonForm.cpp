/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:05:53 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:41:18 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target): AForm::AForm(name, 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): AForm::AForm(other), _target(other._target)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	AForm::operator=(other);
	_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
