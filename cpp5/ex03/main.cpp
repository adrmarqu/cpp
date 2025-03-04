/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:50:11 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:51:00 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define RRF "RobotomyRequestForm"
#define SCF "ShrubberyCreationForm"
#define PPF "PresidentialPardonForm"
#define TARGET_NAME "target"

int	main()
{
	Bureaucrat	boss("Boss", 1);
	Intern		intern;
	Form		*form;

	{
		try
		{
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			delete (rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception happened -> " << e.what() << std::endl;
		}
	}
	{
		try
		{
			form = intern.makeForm(SCF, "Bob");
			delete (form);
			form = intern.makeForm(RRF, "Bob");
			delete (form);
			form = intern.makeForm(PPF, "Bob");
			delete (form);
			form = intern.makeForm("Random Form", "Bob");
			delete (form);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception happened -> " << e.what() << std::endl;
		}
	}
	{
		try
		{
			form = intern.makeForm(SCF, "Bob");
			boss.signForm(*form);
			boss.executeForm(*form);
			delete (form);
			form = intern.makeForm(RRF, "Bob");
			boss.signForm(*form);
			boss.executeForm(*form);
			delete (form);
			form = intern.makeForm(PPF, "Bob");
			boss.signForm(*form);
			boss.executeForm(*form);
			delete (form);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception happened -> " << e.what() << std::endl;
		}
	}
	return 0;
}
