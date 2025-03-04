/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:31:30 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/13 13:23:07 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define YEL "\033[33m"
#define RES "\033[0m"

int main()
{
	std::cout << YEL << "Incrementing and decrementing test\n" << RES << std::endl;

    try
	{
        Bureaucrat bureaucrat("John Doe", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.increment();
        std::cout << "After incrementing: " << bureaucrat << std::endl;

        bureaucrat.increment(5);
        std::cout << "After incrementing by 5: " << bureaucrat << std::endl;

        bureaucrat.decrement();
        std::cout << "After decrementing: " << bureaucrat << std::endl;

        bureaucrat.decrement(10);
        std::cout << "After decrementing by 10: " << bureaucrat << std::endl;
    }
    catch (const std::exception& e)
	{
        std::cout << e.what() << std::endl;
	}

	std::cout << YEL << "\n\nConstructor exception low\n" << RES << std::endl;

    try
	{
        Bureaucrat bureaucratLow("Alice1", 0);
        std::cout << bureaucratLow << std::endl;
    }
    catch (const std::exception& e)
	{
        std::cout << e.what() << std::endl;
	}
    
	std::cout << YEL << "\n\nConstructor exception high\n" << RES << std::endl;
	
	try
	{
        Bureaucrat bureaucratHigh("Alice2", 151);
        std::cout << bureaucratHigh << std::endl;
    }
    catch (const std::exception& e)
	{
        std::cout << e.what() << std::endl;
	}

	std::cout << YEL << "\n\nIncrementing exception\n" << RES << std::endl;

	try
	{
		Bureaucrat a("Tomas", 80);
        std::cout << a << std::endl;

		a.increment(100);
        std::cout << "After incrementing by 5: " << a << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << YEL << "\n\nDecrementing exception\n" << RES << std::endl;

	try
	{
		Bureaucrat b("Donald", 80);
        std::cout << b << std::endl;

		b.decrement(100);
        std::cout << "After decrementing by 10: " << b << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    return 0;
}
