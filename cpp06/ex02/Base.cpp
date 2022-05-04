/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:53:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:57:59 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base::Base(){
	std::cout << "Base constructor called" << std::endl;
}

Base::~Base(){
	std::cout << "Base destructor called" << std::endl;
}