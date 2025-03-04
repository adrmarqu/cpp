/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:27:49 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:57:51 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class Cure: public AMateria
{
	public:

		Cure();
		Cure(Cure const &other);
		Cure	&operator=(Cure const &other);
		~Cure();

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
