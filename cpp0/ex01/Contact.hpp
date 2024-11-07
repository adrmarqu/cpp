/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:34:18 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/10/14 15:06:27 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string	getName(void) const;
		std::string	getSurname(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;

		void	setName(std::string);
		void	setSurname(std::string);
		void	setNickname(std::string);
		void	setPhone(std::string);
		void	setSecret(std::string);

	private:

		std::string	_name;
		std::string	_surname;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif
