/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:47:13 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/08 10:01:07 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(521);
		mstack.push(17);

		std::cout << "Top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << std::endl << "Stack: " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);

		std::cout << std::endl << "Stack2: " << std::endl;
		while (!s.empty())
		{
			std::cout << s.top() << std::endl;
			s.pop();
		}
	}

	// List
	
	{
		std::cout << std::endl << std::endl << std::endl;
	
		std::list<int>	list;
		
		list.push_back(521);
		list.push_back(17);
	
		std::cout << "Top: " << list.back() << std::endl;
	
		list.pop_back();
	
		std::cout << "Size: " << list.size() << std::endl;
	
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		
		std::cout << std::endl << "List: " << std::endl;
		for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
			std::cout << *it << std::endl;

		std::list<int> x(list);
	}
	return 0;
}
