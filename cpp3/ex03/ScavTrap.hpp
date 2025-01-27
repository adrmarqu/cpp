/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:37:27 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 12:41:30 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &toCopy);
		~ScavTrap();

		ScavTrap		&operator=(ScavTrap const &toAssign);
	
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
