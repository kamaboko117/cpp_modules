/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:44:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/19 15:25:07 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name){
	this->_name = name;
	inventorySize = 0;
}

Character::~Character(){}

std::string const	&Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria *m){
	if (inventorySize < 4)
		inventory[inventorySize] = m->clone();
	else
		std::cout << _name << ": inventory full" << std::endl;
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 4)
		std::cout << _name << ": wrong inventory slot" << std::endl;
	else if (inventory[idx]){
		delete inventory[idx];
		inventorySize--;
	}
}

void	Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 4)
		std::cout << _name << ": wrong inventory slot" << std::endl;
	else if (inventory[idx])
		inventory[idx]->use(target);
}