/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:44 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 11:25:33 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << std::endl << "[ DEBUG ]" << std::endl;
	std::cout << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << std::endl << "[ INFO ]" << std::endl;
	std::cout << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << std::endl << "[ WARNING ]" << std::endl;
	std::cout << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << std::endl << "[ ERROR ]" << std::endl;
	std::cout << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int idx = -1;
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			idx = i;

	switch (idx)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break;
		case 1:
			info();
			warning();
			error();
			break;
		case 2:
			warning();
			error();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "Only this levels works: DEBUG, INFO, WARNING, ERROR" << std::endl;
	}
}
