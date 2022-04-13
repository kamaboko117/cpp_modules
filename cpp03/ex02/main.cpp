/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:43:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 16:14:43 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	a("Josh");
	FragTrap	frag("John");
	FragTrap	fragCopy(frag);
	std::string Adventurer("Steve");

	a.attack(Adventurer);
	frag.attack(Adventurer);
	a.takeDamage(4);
	frag.takeDamage(4);
	a.beRepaired(2);
	frag.beRepaired(2);
	frag.highFivesGuys();
}