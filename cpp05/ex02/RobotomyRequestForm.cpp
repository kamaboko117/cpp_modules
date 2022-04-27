/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:44:57 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 13:08:30 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
		: Form(src), _target(src._target){
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
	_target = src._target;
    return (*this);
}

//ETC

void	RobotomyRequestForm::doExec() const{
	std::srand(std::time(0));
	std::cout << "BRRRRRRRRRrrrrrrrrrrrrrrrrrrrrRRRRRRRRRRRRRRRRrrrrrrrrrrrrr" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been successfully robotomised " << std::endl;
	else
		std::cout << "Robotomy on " << this->_target << " failed" << std::endl;
}