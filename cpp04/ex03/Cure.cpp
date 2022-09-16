/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:56:51 by asaboure          #+#    #+#             */
/*   Updated: 2022/09/16 14:02:56 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure"){}

Cure::Cure(const Cure &src) : AMateria("cure"){
	*this = src;
}

Cure	&Cure::operator=(const Cure &rhs){
	(void)rhs;
	return (*this);
}

Cure::~Cure(){}

AMateria	*Cure::clone() const{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}