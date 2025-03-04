/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 11:02:35 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* doggy = new Dog();
	const Animal* catty = new Cat();

	std::cout << doggy->getType() << " " << std::endl;
	std::cout << catty->getType() << " " << std::endl;
	
	catty->makeSound();
	doggy->makeSound();
	
	meta->makeSound();
	
	delete meta;
	delete doggy;
	delete catty;

	/* Wrong clases */

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << wcat->getType() << " " << std::endl;
	
	wmeta->makeSound();
	wcat->makeSound();

	delete wmeta;
	delete wcat;

	return 0;
}
