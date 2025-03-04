/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:27:49 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:49:39 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
	protected:

		std::string	_type;

	public:

		AMateria(std::string const &type);

		AMateria();							
		AMateria(AMateria const &other);
		AMateria	&operator=(AMateria const &other);
		virtual ~AMateria();
		
		std::string const	&getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
