/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:40:38 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/20 13:58:56 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void display(T const &x)
{
	std::cout << x << " ";
}

int	main()
{
	int	array[5] = {1, 4, 6, 2, 9};

	iter(array, 5, &display);

	std::cout << std::endl;

	std::string	array2[3] = {"hola", "mundo", "!"};

	iter(array2, 3, &display);
	
	std::cout << std::endl;
	
	float	array3[8] = {1.5f, 4.1, .6, 122.0, 0.319, 42, -42.0};

	iter(array3, 8, &display);

	std::cout << std::endl;
	
	return 0;
}
