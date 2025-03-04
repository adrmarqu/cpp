/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:11:43 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 11:01:11 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Animal;

class Dog: public Animal
{
	public:

		Dog();
		Dog(Dog const &toCopy);
		Dog	&operator=(Dog const &toAssign);
		~Dog();

		void	makeSound() const;


};

#endif
