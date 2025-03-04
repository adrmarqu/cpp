/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:55:02 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:02:29 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): _name("DefaultF"), _signed(false), _gradeToSign(20), _gradeToExecute(10)
{
}
	
Form::Form(std::string name, int sign, int execute): _name(name), _signed(false), _gradeToSign(sign), _gradeToExecute(execute)
{
}

Form::Form(Form const &other): _name(other._name), _signed(false), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

Form	&Form::operator=(Form const &other)
{
	if (this != &other)
		_signed = other._signed;
	return *this;
}

Form::~Form()
{
}

std::string	const	Form::getName() const
{
	return _name;
}

bool	Form::getIsSigned() const
{
	return _signed;
}

int	Form::getGradeToSign() const
{
	return _gradeToSign;
}

int	Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

void	Form::beSigned(Bureaucrat const &bure)
{
	int const	min = 1;
	int const	max = 150;

	if (bure.getGrade() < min)
		throw GradeTooHighException();
	if (bure.getGrade() > max || bure.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

char const	*Form::GradeTooHighException::what() const throw()
{
	return "Grade of the aform too high!";
}

char const	*Form::GradeTooLowException::what() const throw()
{
	return "Grade of the aform too low!";
}

char const	*Form::FormNotSignedException::what() const throw()
{
	return "Form is not signed!";
}

char const	*Form::InvalidArgumentException::what() const throw()
{
	return "Invalid arguments!";
}

std::ostream	&operator<<(std::ostream &flux, Form const &aform)
{
	flux << aform.getName() << ", signed: " << aform.getIsSigned() << ", sign grade: "
		<< aform.getGradeToSign() << ", execute grade: " << aform.getGradeToExecute() << ".";
	return flux;
}
