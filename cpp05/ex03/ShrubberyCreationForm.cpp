/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:33:38 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 12:23:48 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "tree.hpp"
#include <iostream>
#include <fstream>

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

void	ShrubberyCreationForm::doExec() const{
	std::string		filename(_target);
	std::ofstream	file(filename.append("_shrubbery").c_str());

	if (file.is_open())
		file << TREE;
}