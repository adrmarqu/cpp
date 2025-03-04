/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:50:13 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 14:11:57 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &other);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;

	private:

		std::string	_target;
};

#endif
