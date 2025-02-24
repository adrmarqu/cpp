/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:15:09 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/18 14:32:19 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data	*a = new Data();

	/* Data */

	a->id = 1;
	a->name = "Adria";
	
	/* Print data */

	std::cout << a->id << ": " << a->name << std::endl;
	
	/* Print direccion data */

	std::cout << "Dir: " << &a << std::endl;
	
	/* Serializer */

	uintptr_t n = Serializer::serialize(a);

	/* Delete direction of data */
	
	a = NULL;
	
	/* Print uintptr_t */
	
	std::cout << "Num: " << n << std::endl;

	/* Deserializer */
	
	a = Serializer::deserialize(n);
	
	/* Print direccion data */
	
	std::cout << "Dir: " << &a << std::endl;
	
	/* Print data */
	
	std::cout << a->id << ": " << a->name << std::endl;

	delete a;

	return 0;
}
