/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:53:43 by asaboure          #+#    #+#             */
/*   Updated: 2022/09/16 14:02:48 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const &src) : AMateria("ice"){
	*this = src;
}

Ice	&Ice::operator=(const Ice &rhs){
	(void)rhs;
	return (*this);
}

Ice::~Ice(){}

AMateria	*Ice::clone() const{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}