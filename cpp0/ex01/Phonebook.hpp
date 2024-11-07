/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:34:07 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/10/14 16:35:08 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		void		add(void);
		void		search(void);
		
	private:

		Contact		_contacts[8];
		int			_index;

		void		_setData(std::string, int);
		void		_setTypeData(std::string, int);
		
		static void	_printData(std::string);
		
		int	_getIndexSelected(void);

};

#endif
