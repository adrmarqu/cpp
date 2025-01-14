/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:06:08 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/09 13:33:26 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	getArea(Point const a, Point const b, Point const c)
{
	float	p1 = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
	float	p2 = b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
	float	p3 = c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());
	
	float	area = p1 + p2 + p3;

	return 0.5 * std::abs(area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abc = getArea(a, b, c);
	float	pbc = getArea(point, b, c);
	float	apc = getArea(a, point, c);
	float	abp = getArea(a, b, point);
	
	float totalSum = pbc + apc + abp;

	if (abc == totalSum && pbc > 0 && apc > 0 && abp > 0)
		return true;
	return false;
}
