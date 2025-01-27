/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:25:06 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/15 10:49:07 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		
		std::string _name;
		
		int			_health;
		int			_energy;
		int			_attack;

	public:

		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &toCopy);
		~ClapTrap();
		
		ClapTrap	&operator=(const ClapTrap &toAssign);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif
