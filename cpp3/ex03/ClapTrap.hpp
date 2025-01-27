/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:25:06 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/15 13:06:56 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const &toCopy);
		virtual ~ClapTrap();
		
		ClapTrap	&operator=(ClapTrap const &toAssign);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	protected:
		
		std::string _name;
		
		int			_health;
		int			_energy;
		int			_attack;


};

#endif
