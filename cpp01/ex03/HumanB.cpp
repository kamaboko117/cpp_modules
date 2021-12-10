/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:10:49 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/10 14:20:37 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack()
{
	if (!this->_weapon)
		std::cout << this->_name << " tries to attack without a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType()
			<< std::endl;
}

void	HumanB::equipWeapon(Weapon *weapon){
	this->_weapon = weapon;
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}