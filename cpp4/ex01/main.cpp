/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/31 13:15:26 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NA 6

int main()
{
	std::cout << std::endl << "Subject" << std::endl << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	delete j;
	delete i;

	std::cout << std::endl << "Array of " << NA << std::endl << std::endl;
	/* Personal tests */ 

	const Animal* zoo[NA];

	for (int i = 0; i < NA; i++)
	{
		if (i < NA / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	std::cout << std::endl;
	for (int i = 0; i < NA; i++)
		zoo[i]->makeSound();

	std::cout << std::endl;
	for (int i = 0; i < NA; i++)
		delete zoo[i];

	std::cout << std::endl << "Copy Dog" << std::endl << std::endl;

	/* Copy tests */

	Dog doggy;
	Dog coppy;

	doggy.addIdea("Dog idea", 0, 1);
	
	std::cout << std::endl;
	doggy.printIdeas(0, 3);
	
	std::cout << std::endl;
	coppy.printIdeas(0, 3);

	std::cout << std::endl;
	
	coppy = doggy;

	std::cout << std::endl;
	coppy.printIdeas(0, 3);

	std::cout << std::endl << "Copy Cat" << std::endl << std::endl;

	Cat	catty;
	Cat	cpy;
	
	std::cout << std::endl;
	
	catty.addIdea("First idea", 0, 1);
	catty.addIdea("Second idea", 1, 1);
	
	std::cout << std::endl;
	catty.printIdeas(0, 3);
	
	std::cout << std::endl;
	cpy.printIdeas(0, 3);

	std::cout << std::endl;
	
	cpy = catty;
	
	std::cout << std::endl;
	cpy.printIdeas(0, 3);
	
	std::cout << std::endl << "Ideas" << std::endl << std::endl;
	
	/* Ideas tests */

	Cat *a = new Cat();
	Dog *b = new Dog();

	std::cout << std::endl;
	
	a->addIdea("Same cat idea", 2, 5);
	a->printIdeas(0, 10);

	std::cout << std::endl;
	
	b->addIdea("Same dog idea", 1, 7);
	b->printIdeas(0, 10);
	
	std::cout << std::endl;
	
	delete a;
	delete b;

	/* Deep copy tests */
	
	std::cout << std::endl << "Deep copy" << std::endl << std::endl;
	
	Dog	r;

	std::cout << std::endl;
	r.printIdeas(0,2);
	
	std::cout << std::endl;
	
	Dog	t(r);
	
	std::cout << std::endl;
	t.printIdeas(0,2);
	std::cout << std::endl;

	return 0;
}
