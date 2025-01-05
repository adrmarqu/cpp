/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:52:02 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/03 18:43:09 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public:
		
		HumanA(std::string name, Weapon &gun);
		~HumanA();

		void	attack() const;

	private:

		std::string _name;
		Weapon		&_gun;
};

#endif
