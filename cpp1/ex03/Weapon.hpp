/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:48:10 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 18:47:33 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const	&getType() const;
		void				setType(std::string type);

	private:
		
		std::string	_type;
};

std::ostream	&operator<<(std::ostream &flux, Weapon const &gun);

#endif
