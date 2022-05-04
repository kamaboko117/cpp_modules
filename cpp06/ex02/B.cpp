/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:53:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:55:42 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include <iostream>

B::B(){
	std::cout << "B constructor called" << std::endl;
}

B::~B(){
	std::cout << "B destructor called" << std::endl;
}