/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:56:55 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:03:15 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	private:

		std::string const	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat	&operator=(Bureaucrat const &other);
		~Bureaucrat();

		std::string	const	getName() const;
		int			getGrade() const;

		void	increment();
		void	increment(int nbr);
		void	decrement();
		void	decrement(int nbr);

		void	signForm(Form &form) const;

		void	executeForm(Form const &form);
		
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what() const	throw();
		};
		
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what() const	throw();
		};
};

std::ostream	&operator<<(std::ostream &flux, Bureaucrat const &bureaucrat);

#endif
