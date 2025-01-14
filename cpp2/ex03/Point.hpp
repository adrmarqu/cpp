/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:05:55 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 13:56:29 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:

		Fixed const _x;
		Fixed const _y;

	public:

		Point();
		Point(const float x, const float y);
		Point(const Point &toCopy);
		~Point();
		Point	&operator=(Point const &toAssign);

		Fixed	getX() const;
		Fixed	getY() const;

};

#endif
