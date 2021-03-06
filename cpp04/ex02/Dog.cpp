/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:02:33 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:24:21 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &src){
    this->type = src.type;
	this->_brain = new Brain();
    *(this->_brain) = *(src.getBrain());
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog  &Dog::operator=(Dog const &src){
    this->type = src.type;
	*(this->_brain) = *(src.getBrain());
    return (*this);
}

Animal	&Dog::operator=(Animal const &src){
    this->type = src.getType();
	*(this->_brain) = *(src.getBrain());
    return (*this);
}

void    Dog::makeSound() const{
    std::cout << "Woof woof" << std::endl;
}

Brain   *Dog::getBrain() const{
    return(this->_brain);
}