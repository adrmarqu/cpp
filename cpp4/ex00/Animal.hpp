/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:10:35 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/23 14:20:26 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:

		Animal();
		Animal(Animal const &toCopy);
		Animal	&operator=(Animal const &toAssign);
		virtual	~Animal();

		virtual void	makeSound() const;
		std::string	getType() const;

	protected:

		std::string	_type;
};

#endif
