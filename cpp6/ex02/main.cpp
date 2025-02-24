/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:43:33 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/20 13:17:45 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include "Generate.hpp"
#include <cstdlib>

int	main()
{
	std::srand(time(NULL));

	Base	*a = generate();
	Base	*b = generate();
	Base	*c = generate();
	Base	*base = NULL;
	
	identify(a);
	identify(b);
	identify(c);
	identify(base);

	identify(*a);
	identify(*b);
	identify(*c);
	identify(*base);
	
	delete a;
	delete b;
	delete c;

	return 0;
}
