/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:37 by asaboure          #+#    #+#             */
/*   Updated: 2022/09/16 14:07:31 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : inventorySize(0){
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src){
	*this = src;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs){
	for (std::size_t i = 0; i < rhs.inventorySize; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (rhs.inventory[i])
			inventory[i] = rhs.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m){
	if (inventorySize < 4){
		inventory[inventorySize] = m;
		inventorySize++;
	}
	else
		std::cout << "Materia Source: inventory full" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type){
	for (size_t i = 0; i < inventorySize; i++)
	{
		if (type == inventory[i]->getType())
			return (inventory[i]->clone());
	}
	return (NULL);
}