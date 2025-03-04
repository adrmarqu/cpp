/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:27:49 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:48:55 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
	public:

		Character();
		Character(std::string name);
		Character(Character const &other);
		Character	&operator=(Character const &other);
		~Character();
		
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private:

		std::string	_name;
		AMateria	*_inventory[4];
};

#endif
