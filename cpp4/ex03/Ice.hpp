/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:27:49 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:41:51 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
class ICharacter;

class Ice: public AMateria
{
	public:

		Ice();
		Ice(Ice const &other);
		Ice	&operator=(Ice const &other);
		~Ice();

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
