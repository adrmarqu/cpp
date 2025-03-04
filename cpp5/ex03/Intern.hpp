/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:49:35 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:30:26 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
	
		Intern();
		Intern(Intern const &other);
		Intern	&operator=(Intern const &other);
		~Intern();

		Form	*makeForm(std::string const &nameForm, std::string const &targetForm);

	private:

		Form *createShrubberyCreationForm(std::string const &target);
		Form *createRobotomyRequestForm(std::string const &target);
		Form *createPresidentialPardonForm(std::string const &target);

};

#endif
