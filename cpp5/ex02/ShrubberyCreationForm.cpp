/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:58:46 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:38:26 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target): AForm::AForm(name, 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm::AForm(other), _target(other._target)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	AForm::operator=(other);
	_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

static std::string	getTree()
{
    std::string const	GREEN = "\033[32m";
    std::string const	BROWN = "\033[33m";
    std::string const	RESET = "\033[0m";
	
	std::string	const	tree =
		GREEN +
		"                    &&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"                 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"              &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"           &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		BROWN +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                         |||||\n" +
		"                     |||||||||\n" +
		"                 |||||||||||||\n" +
		"             |||||||||||||||||||\n" +
		"        |||||||||||||||||||||||||\n" +
		"    |||||||||||||||||||||||||||||||\n" +
		RESET;
	return tree;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::ofstream outfile((_target + "_shrubbery").c_str());
	if (outfile.is_open())
	{
		outfile << getTree();
		outfile.close();
	}
	else
		throw std::runtime_error("Error to open the file.");
}
