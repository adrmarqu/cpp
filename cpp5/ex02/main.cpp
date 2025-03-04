/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:36:48 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:52:46 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define FORM_NAME "42_Pool"
#define TARGET_NAME "target"

int main()
{
	/* Shrubbery creation form */
	std::cout << "\033[32mShrubbery creation Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		ShrubberyCreationForm	scf(FORM_NAME, TARGET_NAME);

		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		ShrubberyCreationForm	scf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{		
		Bureaucrat				toto("Assistant", 138);
		ShrubberyCreationForm	scf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Robotomy request form */
	std::cout << "\033[32m\n\nRobotomy request Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		RobotomyRequestForm	rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 50);
		RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Presidential pardon form */
	std::cout << "\033[32m\n\nPresidential pardon Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 15);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

    return 0;
}
