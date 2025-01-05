/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:40 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/02 16:02:32 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl
{
	public:

		Harl(void);
		~Harl(void);
		
		void complain(std::string level);
	
	private:
	
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	

};

#endif
