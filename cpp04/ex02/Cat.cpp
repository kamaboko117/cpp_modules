/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:04:48 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:24:08 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const &src){
    std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*(this->_brain) = *(src.getBrain());
    this->_brain = src._brain;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat  &Cat::operator=(Cat const &src){
    this->type = src.type;
	*(this->_brain) = *(src.getBrain());
    return (*this);
}

Animal	&Cat::operator=(Animal const &src){
    this->type = src.getType();
	*(this->_brain) = *(src.getBrain());
    return (*this);
}

void    Cat::makeSound() const{
    std::cout << "Meow meow" << std::endl;
}

Brain	*Cat::getBrain() const{
    return(this->_brain);
}