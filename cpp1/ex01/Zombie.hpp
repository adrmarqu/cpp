/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:39:04 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/11/07 10:04:09 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	
	public:

		Zombie(std::string name);
		Zombie();
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);

	private:
		
		std::string	_name;

};

#endif
