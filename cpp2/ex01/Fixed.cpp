/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:34 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 12:27:33 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(0);
	_value = num << _bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(num * (pow(2, _bits)));
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
		_value = toAssign.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return _value / pow(2, _bits);
}

int		Fixed::toInt(void) const
{
	return _value >> _bits;
}

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed)
{
	flux << fixed.toFloat();
	return flux;
}
