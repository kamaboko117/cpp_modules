/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:26:41 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 16:06:06 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

//CANON

Form::Form(std::string name, int sign, int exec) :	_name(name), _signGrade(sign),
													_execGrade(exec){
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const &src) :	_name(src._name), _signed(src._signed),
								_signGrade(src._signGrade), _execGrade(src._execGrade){
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}

Form  &Form::operator=(Form const &src){
	(void)src;
    return (*this);
}

//OPERATORS

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o << i.getName() << ": Rank required to sign: " << i.getSignGrade()
		<< "; Rank required to execute: " << i.getExecGrade()
		<< (i.isSigned() ? "; Signed" : "; Unsigned");
	return (o);
}

//ETC

std::string	Form::getName() const{
	return(this->_name);
}

int			Form::getSignGrade() const{
	return (this->_signGrade);
}

int			Form::getExecGrade() const{
	return (this->_execGrade);
}

bool		Form::isSigned() const{
	return (this->_signed);
}

void	Form::beSigned(const Bureaucrat &b){
	if (b.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else if (this->isSigned())
		throw FormAlreadySignedException();
	else
		this->_signed = true;
}

//EXCEPTIONS

const char	*Form::GradeTooHighException::what() const throw(){
	return ("Form: Grade too high");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("Form: Grade too low");
}

const char	*Form::FormAlreadySignedException::what() const throw(){
	return ("Form is already signed");
}