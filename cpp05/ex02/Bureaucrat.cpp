/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:23 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 11:34:44 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

//CANON

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

//OPERATORS

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ": Rank " << i.getGrade();
	return (o);
}

//ETC

std::string	Bureaucrat::getName() const{
	return this->_name;
}

int			Bureaucrat::getGrade() const{
	return this->_grade;
}

void		Bureaucrat::upgrade(){
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void		Bureaucrat::downgrade(){
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void		Bureaucrat::signForm(Form &form) const{
	try{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << this->getName() << " couldn't sign " << form.getName() <<
			" because: " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const &form) const{
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << this->getName() << " couldn't execute " << form.getName() <<
			" because: " << e.what() << std::endl;
	}
}

//EXCEPTIONS

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade must be lower than 0");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade must be higher than 151");
}