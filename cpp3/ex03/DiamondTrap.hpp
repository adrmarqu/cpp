/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:37:27 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 13:09:37 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &toCopy);
		virtual ~DiamondTrap();

		DiamondTrap		&operator=(DiamondTrap const &toAssign);
	
		void	whoAmI() const;

		using	ScavTrap::attack;

	private:

		std::string _name;
};

#endif
