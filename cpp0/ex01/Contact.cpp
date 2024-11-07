/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:55:20 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/10/14 14:59:18 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::getName(void) const
{
	return this->_name;
}

std::string Contact::getSurname(void) const
{
	return this->_surname;
}

std::string Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string Contact::getPhone(void) const
{
	return this->_phone;
}

std::string Contact::getSecret(void) const
{
	return this->_secret;
}

void	Contact::setName(std::string str)
{
	this->_name = str;
	return ;
}

void	Contact::setSurname(std::string str)
{
	this->_surname = str;
	return ;
}

void	Contact::setNickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void	Contact::setPhone(std::string str)
{
	this->_phone = str;
	return ;
}

void	Contact::setSecret(std::string str)
{
	this->_secret = str;
	return ;
}
