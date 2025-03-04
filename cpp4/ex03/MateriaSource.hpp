/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:27:49 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 13:44:20 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>

class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
	public:

		MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource	&operator=(MateriaSource const &other);
		~MateriaSource();
		
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
	
	private:

		AMateria	*_templates[4];
};

#endif
