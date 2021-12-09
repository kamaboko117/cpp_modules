/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:57:22 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/09 14:21:15 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie				*horde = new Zombie[N];
	std::stringstream	sstm;
	
	(void)name;
	for (int i = 0; i < N; i++)
	{
		sstm << name << i;
		(horde[i]).setName(sstm.str());
		sstm.str(std::string());
	}
	return (horde);
}