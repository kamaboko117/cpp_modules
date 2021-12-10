/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:35 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/10 14:18:49 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon	weapon1;
	Weapon	weapon2;
	HumanA	human1("Jack", weapon1);
	HumanB	human2("Chloe");

	human1.attack();
	weapon1.setType("axe");
	human1.attack();
	human2.attack();
	human2.equipWeapon(&weapon1);
	human2.attack();
	human2.equipWeapon(&weapon2);
	human2.attack();
}