/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:55:02 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:06:35 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(): _name("DefaultF"), _signed(false), _gradeToSign(20), _gradeToExecute(10)
{
}
	
AForm::AForm(std::string name, int sign, int execute): _name(name), _signed(false), _gradeToSign(sign), _gradeToExecute(execute)
{
}

AForm::AForm(AForm const &other): _name(other._name), _signed(false), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

AForm	&AForm::operator=(AForm const &other)
{
	if (this != &other)
		_signed = other._signed;
	return *this;
}

AForm::~AForm()
{
}

std::string	const	AForm::getName() const
{
	return _name;
}

bool	AForm::getIsSigned() const
{
	return _signed;
}

int	AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int	AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void	AForm::beSigned(Bureaucrat const &bure)
{
	int const	min = 1;
	int const	max = 150;

	if (bure.getGrade() < min)
		throw GradeTooHighException();
	if (bure.getGrade() > max || bure.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

char const	*AForm::GradeTooHighException::what() const throw()
{
	return "Grade of the aform too high!";
}

char const	*AForm::GradeTooLowException::what() const throw()
{
	return "Grade of the aform too low!";
}

char const	*AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed!";
}

std::ostream	&operator<<(std::ostream &flux, AForm const &aform)
{
	flux << aform.getName() << ", signed: " << aform.getIsSigned() << ", sign grade: "
		<< aform.getGradeToSign() << ", execute grade: " << aform.getGradeToExecute() << ".";
	return flux;
}
