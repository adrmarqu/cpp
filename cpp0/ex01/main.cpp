/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:32:15 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/10/14 15:22:36 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	book;
	std::string	data;

	while (1)
	{
		std::cout << "Command: ";
		std::getline(std::cin, data);
		if (data == "ADD")
			book.add();
		else if (data == "SEARCH")
			book.search();
		else if (data == "EXIT")
			break ;
		if (std::cin.eof())
			break ;
	}
	return (0);
}
