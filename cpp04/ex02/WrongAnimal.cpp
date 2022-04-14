/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:55:57 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 13:57:04 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

//CANON

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    this->type = src.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &src){
    this->type = src.type;
    return (*this);
}

//ETC

std::string WrongAnimal::getType(){
    return (this->type);
}

void    WrongAnimal::makeSound(){
    std::cout << "*Demon noises*" << std::endl;
}