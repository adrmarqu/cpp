/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:05:59 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/09 12:18:28 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
}

Point::Point(Point const &toCopy): _x(toCopy._x), _y(toCopy._y)
{
}

Point::~Point()
{

}

Point	&Point::operator=(Point const &toAssign)
{
	//static_cast<void>(toAssign);
	if (this == &toAssign)
		;
	return *this;
}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}
