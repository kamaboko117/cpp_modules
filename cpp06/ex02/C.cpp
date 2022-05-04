/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:53:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:56:14 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include <iostream>

C::C(){
	std::cout << "C constructor called" << std::endl;
}

C::~C(){
	std::cout << "C destructor called" << std::endl;
}