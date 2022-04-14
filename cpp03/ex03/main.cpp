/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:43:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 17:19:58 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	a("Josh");
	DiamondTrap	diam("Jack");
	std::string Adventurer("Steve");

	a.attack(Adventurer);
	diam.attack(Adventurer);
	a.takeDamage(4);
	diam.takeDamage(4);
	a.beRepaired(2);
	diam.beRepaired(2);
	diam.whoAmI();
	diam.highFivesGuys();
}