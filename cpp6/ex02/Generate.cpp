/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:41:04 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/19 13:02:42 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Generate.hpp"
#include <cstdlib>

Base	*generate(void)
{
	int	n = std::rand() % 3;

	if (!n) return new A;
	else if (n == 1) return new B;
	return new C;
}
