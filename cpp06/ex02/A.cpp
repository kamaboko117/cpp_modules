/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:53:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:54:44 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream>

A::A(){
	std::cout << "A constructor called" << std::endl;
}

A::~A(){
	std::cout << "A destructor called" << std::endl;
}