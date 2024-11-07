/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:59:26 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/10/14 17:01:52 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook created" << std::endl << std::endl;
	this->_index = 0;

	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << std::endl << "Phonebook destroyed" << std::endl;

	return ;
}

void	Phonebook::_setTypeData(std::string data, int type)
{
	if (type == 1)
		this->_contacts[this->_index % 8].setName(data);
	else if (type == 2)
		this->_contacts[this->_index % 8].setSurname(data);
	else if (type == 3)
		this->_contacts[this->_index % 8].setNickname(data);
	else if (type == 4)
		this->_contacts[this->_index % 8].setPhone(data);
	else if (type == 5)
		this->_contacts[this->_index % 8].setSecret(data);

}

void	Phonebook::_setData(std::string msg, int type)
{
	std::string	data;

	data = "";
	while (data == "" && !std::cin.eof())
	{
		std::cout << msg;
		std::getline(std::cin, data);
		if (data != "")
			this->_setTypeData(data, type);
	}
}

void	Phonebook::_printData(std::string str)
{
	int			length;

	length = str.length();
	if (length > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::string	space(10 - length, ' ');
		std::cout << space << str;
	}
	std::cout << "|";
	return ;
}

int	Phonebook::_getIndexSelected(void)
{
	int			index;
	int			max;
	char		str[100];

	max = this->_index;
	if (max > 7)
		max = 8;
	while (1)
	{
		std::cout << "Select index data that you want to see (1-" << max << "): ";
		if (std::cin.getline(str, 100))
		{
			index = atoi(str);
			if (index > 0 && index <= max)
				return (index);
		}
		else if (std::cin.eof())
			return (-1);
	}
}

void	Phonebook::add(void)
{
	std::string	data;

	if (this->_index > 7)
	{
		std::cout << std::endl;
		std::cout << "WARNING: PhoneBook full!" << std::endl;
		std::cout << "This contact will be deleted: ";
		std::cout << this->_contacts[this->_index % 8].getNickname();
		std::cout << std::endl << std::endl;
		data = "";
		while (data == "" && !std::cin.eof())
		{
			std::cout << "Do you want to continue?(y/n) ";
			std::getline(std::cin, data);
			if (data == "n")
			{
				std::cout << std::endl;
				return ;
			}
			else if (data == "y")
				break ;
			else
				data = "";
		}
	}
	std::cout << std::endl;
	this->_setData("First Name: ", 1);
	this->_setData("Last Name: ", 2);
	this->_setData("Nickname: ", 3);
	this->_setData("Phone Number: ", 4);
	this->_setData("Dark Secret: ", 5);
	if (!std::cin.eof())
		std::cout << std::endl << "Contact created succefully!" << std::endl << std::endl;
	this->_index++;
	return ;
}

void	Phonebook::search(void)
{
	int	rows;
	int	i;

	rows = this->_index;
	if (!rows)
	{
		std::cout << std::endl << "There is no data to display!" << std::endl << std::endl;
		return ;
	}
	if (rows > 8)
		rows = 8;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = 0;
	while (i < rows && !std::cin.eof())
	{
		std::cout << "|         " << i + 1 << "|";
		this->_printData(this->_contacts[i].getName());
		this->_printData(this->_contacts[i].getSurname());
		this->_printData(this->_contacts[i].getNickname());
		std::cout << std::endl;
		if (i < (rows - 1))
			std::cout << "|----------|----------|----------|----------|" << std::endl;
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl << std::endl;

	i = this->_getIndexSelected();
	if (i == -1)
		return ;
	i--;
	std::cout << std::endl << "First name: " << this->_contacts[i].getName() << std::endl;
	std::cout << "Last name: " << this->_contacts[i].getSurname() << std::endl;
	std::cout << "Nickname: " << this->_contacts[i].getNickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[i].getPhone() << std::endl;
	std::cout << "Dark secret: " << this->_contacts[i].getSecret() << std::endl << std::endl;

	return ;
}
