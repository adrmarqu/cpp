/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:12:24 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 11:01:20 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Animal;

class Cat: public Animal
{
	public:

		Cat();
		Cat(Cat const &toCopy);
		Cat	&operator=(Cat const &toAssign);
		~Cat();

		void	makeSound() const;

};

#endif
