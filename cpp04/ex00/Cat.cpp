/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:04:48 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:20:11 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &src){
    this->type = src.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat  &Cat::operator=(Cat const &src){
    this->type = src.type;
    return (*this);
}

void    Cat::makeSound() const{
    std::cout << "Meow meow" << std::endl;
}