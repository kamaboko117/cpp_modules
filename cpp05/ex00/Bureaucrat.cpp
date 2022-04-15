/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:23 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 19:20:13 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

//CANON

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name){
	this->_grade = src._grade;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &src){
	this->_grade = src._grade;
    return (*this);
}

//ETC

std::string	Bureaucrat::getName(){
	return this->_name;
}

int			Bureaucrat::getGrade(){
	return this->_grade;
}

void		Bureaucrat::upgrade(){
	this->_grade--;
}