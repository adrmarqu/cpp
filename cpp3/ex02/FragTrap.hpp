/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:38:36 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/21 10:45:57 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &toCopy);
		~FragTrap();

		FragTrap		&operator=(FragTrap const &toAssign);
	
		void	highFivesGuys(void) const;
};

#endif

