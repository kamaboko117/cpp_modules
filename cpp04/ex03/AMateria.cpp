/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:49:34 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/19 15:27:01 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){
	this->_type = type;
}

AMateria::~AMateria(){}

std::string const	&AMateria::getType() const{
	return (this->_type);
}
