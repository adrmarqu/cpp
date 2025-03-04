/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:17 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/13 14:14:49 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:

		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

	public:

		Form();
		Form(std::string name, int sign, int execute);
		Form(Form const &other);
		Form	&operator=(Form const &other);
		~Form();

		std::string	const	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		void	beSigned(Bureaucrat const &bure);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &flux, Form const &form);

#endif
