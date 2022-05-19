/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:37 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/19 15:38:38 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : inventorySize(0){}

MateriaSource::~MateriaSource(){}

void	MateriaSource::learnMateria(AMateria *m){
	if (inventorySize < 4){
		inventory[inventorySize] = m->clone();
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