/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:20:02 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 13:26:17 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: Form("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
		: Form(src), _target(src._target){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
	_target = src._target;
    return (*this);
}

//ETC

void	PresidentialPardonForm::doExec() const{
	std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}