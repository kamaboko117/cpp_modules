/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:33:38 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 17:55:47 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

//CANON

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: Form("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
		: Form(src), _target(src._target){
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
	_target = src._target;
    return (*this);
}

//ETC

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
	std::cout << "plouf" << std::endl;
	(void)executor;
}