/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:57:40 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/10 14:02:58 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType(){
	return (this->_type);
}

void	Weapon::setType(std::string type){
	this->_type = type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
