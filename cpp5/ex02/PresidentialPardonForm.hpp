/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:51:28 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 13:14:12 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm: public AForm
{
	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &other);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const &executor) const;

	private:

		std::string	_target;
};

#endif
