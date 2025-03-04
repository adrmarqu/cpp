/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:12:24 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 13:19:31 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Animal;
class Brain;

class Cat: public Animal
{
	public:

		Cat();
		Cat(Cat const &toCopy);
		Cat	&operator=(Cat const &toAssign);
		~Cat();

		void	makeSound() const;
		void	addIdea(std::string const &str, int idx, int length);
		void	printIdeas(int start, int end) const;

	private:

		Brain	*_brain;
		void	_printOneIdea(int idx) const;

};

#endif
