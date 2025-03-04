/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:09:46 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 13:09:26 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:

		Brain();
		Brain(Brain const &toCopy);
		Brain	&operator=(Brain const &toAssign);
		~Brain();

		void		setIdea(std::string const &str, int idx);
		std::string	&getIdea(int idx);

	private:

		std::string _ideas[100];
};

#endif
