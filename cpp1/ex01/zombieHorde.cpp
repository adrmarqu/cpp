/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:39:23 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/01/05 11:07:49 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	try
	{
		for (int i = 0; i < N; i++)
			horde[i].setName(name);
		return horde;
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << "Memory fail: " << e.what() << std::endl;
		return NULL;
	}
}
