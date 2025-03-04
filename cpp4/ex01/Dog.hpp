/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:11:43 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 13:06:06 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Animal;
class Brain;

class Dog: public Animal
{
	public:

		Dog();
		Dog(Dog const &toCopy);
		Dog	&operator=(Dog const &toAssign);
		~Dog();

		void	makeSound() const;
		void	addIdea(std::string const &str, int idx, int length);
		void	printIdeas(int start, int end) const;

	private:

		Brain	*_brain;
		void	_printOneIdea(int idx) const;

};

#endif
