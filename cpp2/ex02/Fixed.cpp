/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:34 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/14 12:15:46 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTORS */

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(const int num)
{
	this->setRawBits(0);
	_value = num << _bits;
}

Fixed::Fixed(const float num)
{
	_value = roundf(num * (pow(2, _bits)));
}

Fixed::Fixed(Fixed const &toCopy)
{
	*this = toCopy;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(Fixed const &toAssign)
{
	if (this != &toAssign)
		_value = toAssign.getRawBits();
	return *this;
}

/* VALUES */

int	Fixed::getRawBits() const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

/* RETURN TYPE */

float	Fixed::toFloat(void) const
{
	return _value / pow(2, _bits);
}

int		Fixed::toInt(void) const
{
	return _value >> _bits;
}

/* MINIM */

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

/* MAXIM */

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed)
{
	flux << fixed.toFloat();
	return flux;
}

/* COMPARATIONS */

bool	operator>(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() > b.getRawBits(); 
}

bool	operator<(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() < b.getRawBits(); 
}

bool	operator==(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() == b.getRawBits(); 
}

bool	operator!=(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() != b.getRawBits(); 
}

bool	operator>=(const Fixed &a, const Fixed &b)
{
	return a > b || a == b; 
}

bool	operator<=(const Fixed &a, const Fixed &b)
{
	return a < b || a == b; 
}

/* MATHS */

Fixed	operator+(const Fixed &a, const Fixed &b)
{
	return a.toFloat() + b.toFloat();
}

Fixed	operator-(const Fixed &a, const Fixed &b)
{
	return a.toFloat() - b.toFloat();
}

Fixed	operator*(const Fixed &a, const Fixed &b)
{
	return a.toFloat() * b.toFloat();
}

Fixed	operator/(const Fixed &a, const Fixed &b)
{
	return a.toFloat() / b.toFloat();
}

/* INCREMENTATION ++ -> ++var, ++(int) -> var++ */

Fixed	&Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp	= *this;

	++*this;
	return tmp;
}

Fixed	&Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp	= *this;

	--*this;
	return tmp;
}
