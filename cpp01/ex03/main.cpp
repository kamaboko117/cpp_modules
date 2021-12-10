/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:35 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/10 15:20:45 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	Weapon	weapon1("axe");
	Weapon	weapon2("hammer");
	HumanA	human1("Jack", weapon1);
	HumanB	human2("Chloe");

	human1.attack();
	weapon1.setType("flamethrower");
	human1.attack();
	human2.attack();
	human2.setWeapon(weapon1);
	human2.attack();
	human2.setWeapon(weapon2);
	human2.attack();
}