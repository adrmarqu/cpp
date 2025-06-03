/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:52:20 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/03/31 15:26:24 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <set>

template <typename T>
void	testContainer(T &container, int value)
{
	try
	{
		typename T::const_iterator	it = easyfind(container, value);
		std::cout << "Found " << value << " in container: " << *it << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

int	main()
{
	// Vector
	{
		std::cout << "\033[33m" << "Vector" << "\033[0m" << std::endl << std::endl;
		
		std::vector<int> cont;
		
		cont.push_back(1);
		cont.push_back(2);
		cont.push_back(3);
		cont.push_back(4);
		
		testContainer(cont, 3);
		testContainer(cont, 5);
		
		std::cout << std::endl;
	}
	// List
	{
		std::cout << "\033[33m" << "List" << "\033[0m" << std::endl << std::endl;
		
		std::list<int> cont;
		
		cont.push_back(1);
		cont.push_back(2);
		cont.push_back(3);
		cont.push_back(4);
		
		testContainer(cont, 3);
		testContainer(cont, 5);
		
		std::cout << std::endl;
	}
	// Deque
	{
		std::cout << "\033[33m" << "Deque" << "\033[0m" << std::endl << std::endl;
		
		std::deque<int> cont;

		cont.push_back(1);
		cont.push_back(2);
		cont.push_back(3);
		cont.push_back(4);
		
		testContainer(cont, 3);
		testContainer(cont, 5);
		
		std::cout << std::endl;
	}
	// Set
	{
		std::cout << "\033[33m" << "Set" << "\033[0m" << std::endl << std::endl;
		
		std::set<int> cont;
		
		cont.insert(4);
		cont.insert(3);
		cont.insert(2);
		cont.insert(1);
		
		testContainer(cont, 3);
		testContainer(cont, 5);
		
		std::cout << std::endl;
	}

	return 0;
}
