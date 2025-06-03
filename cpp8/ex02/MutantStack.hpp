/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:49:42 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/06 18:54:36 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		MutantStack(): std::stack<T>() {}
		MutantStack(MutantStack const &other): std::stack<T>(other) {}
		~MutantStack() {}
		
		MutantStack	&operator=(MutantStack const &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}

		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
		
		const_iterator	begin() const
		{
			return this->c.begin();
		}
		const_iterator	end() const
		{
			return this->c.end(); 
		}
};

#endif
