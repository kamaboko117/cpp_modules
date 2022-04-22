/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:43:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 12:13:30 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Josh");
	ClapTrap	b("Jeff");
	ClapTrap	c(a);
	ClapTrap	d = c;
	std::string	Adventurer = "Steve";
	
	a.attack(Adventurer);
	a.takeDamage(4);
	a.beRepaired(2);
	a.setEP(-5);
	a.attack(Adventurer);
	a.beRepaired(2);
}