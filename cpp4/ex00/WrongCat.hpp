/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:12:24 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 11:00:25 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongAnimal;

class WrongCat: public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(WrongCat const &toCopy);
		WrongCat	&operator=(WrongCat const &toAssign);
		~WrongCat();

		void	makeSound() const;

};

#endif
