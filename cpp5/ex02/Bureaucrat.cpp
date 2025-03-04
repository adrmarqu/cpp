/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:01:47 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 12:40:21 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(5)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::increment()
{
	int const	min = 1;
	
	if (_grade == min)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::increment(int nbr)
{
	if (!nbr)
		return ;
	
	int const	min = 1;
	
	if (_grade - nbr < min)
		throw Bureaucrat::GradeTooHighException();
	_grade -= nbr;
}

void	Bureaucrat::decrement()
{
	int const	max = 150;

	if (_grade == max)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::decrement(int nbr)
{
	if (!nbr)
		return ;
	
	int const	max = 150;
	
	if (_grade + nbr > max)
		throw Bureaucrat::GradeTooLowException();
	_grade += nbr;
}

char const	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

char const	*Bureaucrat::GradeTooLowException::what() const	throw()
{
	return "Grade is too low!";
}

void	Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() <<
			" because " << e.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << form.getName() << " failed to execute because " << e.what() << "." << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &flux, Bureaucrat const &bureaucrat)
{
	flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return flux;
}
