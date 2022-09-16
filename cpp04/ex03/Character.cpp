/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:44:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/09/16 14:10:17 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name){
	this->_name = name;
	inventorySize = 0;
}

Character::Character(const Character &src){
	*this = src;
	return;
}

Character::~Character(){}

Character &	Character::operator=( Character const & rhs )
{
	for (std::size_t i = 0; i < rhs.inventorySize; i++)
	{
		if (inventory[i])
			delete this->inventory[i];
		inventory[i] = rhs.inventory[i];
	}
	this->_name = rhs.getName();
	return *this;
}

std::string const	&Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria *m){
	if (inventorySize < 4){
		inventory[inventorySize] = m;
		inventorySize++;
	}
	else
		std::cout << _name << ": inventory full" << std::endl;
}

void	Character::unequip(int idx){
	int i;

	i = idx + 1;
	while (i < 4 && inventory[i])
	{
		inventory[i - 1] = inventory[i];
		i++;
	}
	inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 4)
		std::cout << _name << ": wrong inventory slot" << std::endl;
	else if (inventory[idx])
		inventory[idx]->use(target);
}