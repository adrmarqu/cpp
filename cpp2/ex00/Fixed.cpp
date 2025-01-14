/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:34 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 12:28:20 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &toAssign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toAssign)
		_fixed_point = toAssign.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}
