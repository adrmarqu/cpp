/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:10:35 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/25 11:03:04 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &toCopy);
		WrongAnimal	&operator=(WrongAnimal const &toAssign);
		~WrongAnimal();

		void	makeSound() const;
		std::string	getType() const;

	protected:

		std::string	_type;
};

#endif
