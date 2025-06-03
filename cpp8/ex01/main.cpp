/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:52:20 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/06 18:37:36 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

int main()
{
	std::srand(std::time(0));

	std::cout << "\033[1;33mSubject\033[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(5);
	
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest1 - Negative\033[0m" << std::endl << std::endl;
	
	try
	{
		Span	sp = Span(10);
		
		sp.addNumber(-6);
		sp.addNumber(-3);
		sp.addNumber(-17);
		sp.addNumber(-9);
		sp.addNumber(-11);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest2 - Random\033[0m" << std::endl << std::endl;
	
	try
	{
		Span	sp = Span(10000);
		
		sp.addMultipleNumbers(HUNDRED, 0, 10);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest3 - Negative Random\033[0m" << std::endl << std::endl;
	
	try
	{
		Span	sp = Span(10);
		
		sp.addMultipleNumbers(TEN, -1, 10);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest4 - No parameters\033[0m" << std::endl << std::endl;
	
	try
	{
		Span	sp = Span(10);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest5 - One parameter\033[0m" << std::endl << std::endl;
	
	try
	{
		Span	sp = Span(10);
		
		sp.addNumber(1000);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest6 - Wrong parameters multiple\033[0m" << std::endl << std::endl;
	
	try
	{
		Span	sp = Span(10);
		
		sp.addMultipleNumbers(TEN, 0, 15);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest7 - 10.000 span\033[0m" << std::endl << std::endl;
	try
	{
		Span	sp = Span(10000);
		
		//sp.addMultipleNumbers(HUNDREDTHOUSAND, 0, 10000);
		
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest8 - Copy\033[0m" << std::endl << std::endl;
	try
	{
		Span	sp = Span(10);

		sp.addMultipleNumbers(TEN, 1, 5);

		Span	span(sp);
		
		std::cout << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;33mTest9 - Assign\033[0m" << std::endl << std::endl;
	try
	{
		Span	sp = Span(10);

		sp.addMultipleNumbers(TEN, 1, 5);

		Span	span = sp;
		
		std::cout << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
