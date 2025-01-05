/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:10:13 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 17:08:17 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int	main()
{
	std::string	stringVAR = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringVAR;
	std::string	&stringREF = stringVAR;

	std::cout << std::endl;
	
	std::cout << "Memory address of stringVAR: " << &stringVAR << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "Value of stringVAR:         " << stringVAR << std::endl;
	std::cout << "Value pointed of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed of stringREF: " << stringREF << std::endl;

	std::cout << std::endl;
	
	return (0);
}
