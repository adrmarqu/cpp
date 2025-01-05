/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:52:02 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 18:22:37 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public:
		
		HumanB(std::string name);
		~HumanB();

		void	attack() const;

		void	setWeapon(Weapon &gun);

	private:

		std::string _name;
		Weapon		*_gun;
};

#endif
