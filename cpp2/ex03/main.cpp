/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:10 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <string>
#include <limits>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

static float	enterValue(char type)
{
	float	var = 0.0;

	std::cout << "Enter " << type << ": ";
	std::cin >> var;

	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invaid input, put a new " << type << ": ";
		std::cin >> var;
	}
	return var;
}

static Point	getNewPoint(void)
{
	std::string	str = "";

	float x = enterValue('X');
	float y = enterValue('Y');
	Point point(x, y);

	return point;
}

int	main(void)
{
	std::cout << "Enter Point A of the triangle: " << std::endl;
	Point const a(getNewPoint());

	std::cout << std::endl << "Enter Point B of the triangle: " << std::endl;
	Point const b(getNewPoint());
	
	std::cout << std::endl << "Enter Point C of the triangle: " << std::endl;
	Point const c(getNewPoint());
	
	std::cout << std::endl << "Enter Point to check: " << std::endl;
	Point const point(getNewPoint());

	std::cout << std::endl << "The point A is (" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "The point B is (" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "The point C is (" << c.getX() << ", " << c.getY() << ")" << std::endl;
	std::cout << "The point point is (" << point.getX() << ", " << point.getY() << ")" << std::endl;
	
	std::cout << std::endl << "The point is ";
	if (bsp(a, b, c, point))
		std::cout << "inside ";
	else
		std::cout << "outside ";
	std::cout << "the triangle!" << std::endl;

	return 0;
}
