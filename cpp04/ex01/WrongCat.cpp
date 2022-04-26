/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:00:10 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:23:24 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src){
    this->type = src.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat  &WrongCat::operator=(WrongCat const &src){
    this->type = src.type;
    return (*this);
}

void    WrongCat::makeSound() const{
    std::cout << "Meow meow" << std::endl;
}