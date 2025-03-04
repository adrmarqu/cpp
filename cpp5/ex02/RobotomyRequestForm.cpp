/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:06:04 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:41:13 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target): AForm::AForm(name, 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): AForm::AForm(other), _target(other._target)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	AForm::operator=(other);
	_target = other._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << "Making some drilling noises." << std::endl;
	
	srand(time(0));
	int	success = rand() % 2;
	if (success)
		std::cout << _target << " has been robotomized successfully!!" << std::endl;
	else
		std::cout << _target << " robotomy failed :(" << std::endl;

}
