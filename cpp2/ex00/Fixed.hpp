/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:41:29 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 12:15:09 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:

		int					_fixed_point;
		static const int	_fractional_bits = 8;

	public:

		Fixed();
		Fixed(Fixed const &toCopy);
		~Fixed();
		Fixed	&operator=(Fixed const &toAssign);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
