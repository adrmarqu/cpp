/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:50:13 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:13:48 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &other);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;

	private:

		std::string	_target;
};

#endif
