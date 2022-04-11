/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:43:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/11 16:57:44 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Josh");
	ClapTrap	b("Jeff");
	ClapTrap	c(a);
	ClapTrap	d = c;
	ScavTrap	scav("Jake");
	std::string	Adventurer = "Steve";

	a.attack(Adventurer);
	scav.attack(Adventurer);
	a.takeDamage(4);
	scav.takeDamage(4);
	a.beRepaired(2);
	scav.beRepaired(2);
}