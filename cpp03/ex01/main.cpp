/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:43:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 15:41:15 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	std::cout << "CONSTRUCT:" << std::endl;
	ClapTrap	a("Josh");
	ClapTrap	b("Jeff");
	ClapTrap	c(a);
	ClapTrap	d("tmp");
	ScavTrap	scav("Jake");
	ScavTrap	scavCopy(scav);
	ScavTrap	scavTmp("tmp");
	std::string	Adventurer = "Steve";

	std::cout << std::endl << "TESTS" << std::endl;
	a.attack(Adventurer);
	scav.attack(Adventurer);
	a.takeDamage(4);
	scav.takeDamage(4);
	a.beRepaired(2);
	scavTmp = scav;
	scavTmp.beRepaired(2);
	scav.beRepaired(2);
	scav.guardGate();
	std::cout << std::endl << "DESTRUCT" << std::endl;
}