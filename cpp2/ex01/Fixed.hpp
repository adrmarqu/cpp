/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:29 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 12:18:53 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:

		int					_value;
		static const int	_bits = 8;

	public:

		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed const &toCopy);
		~Fixed();
		Fixed	&operator=(Fixed const &toAssign);

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed);

#endif
