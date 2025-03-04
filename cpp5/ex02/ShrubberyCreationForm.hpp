/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:46:05 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:14:32 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const &executor) const;

	private:

		std::string	_target;
};

#endif
