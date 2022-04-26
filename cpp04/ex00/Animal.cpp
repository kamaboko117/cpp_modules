/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:25:18 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:19:29 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

//CANON

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src){
    this->type = src.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(Animal const &src){
    this->type = src.type;
    return (*this);
}

//ETC

std::string Animal::getType() const{
    return (this->type);
}

void    Animal::makeSound() const{
    std::cout << "*Animal noises*" << std::endl;
}