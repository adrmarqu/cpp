/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:17 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:51:40 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private:

		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

	public:

		AForm();
		AForm(std::string name, int sign, int execute);
		AForm(AForm const &other);
		AForm	&operator=(AForm const &other);
		virtual ~AForm();

		std::string	const	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		void	beSigned(Bureaucrat const &bure);

		virtual void	execute(Bureaucrat const &executor) const = 0;

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

		class	FormNotSignedException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &flux, AForm const &aform);

#endif
