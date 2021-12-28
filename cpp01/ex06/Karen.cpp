/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:10:27 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/22 19:14:33 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <map>

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

void	Karen::debug()
{
	std::cout << "I love getting extra bacon for my 7XL-double-cheese-triple-pi\
ckle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I can't believe youu have to pay to get extra bacon. You don’t\
put enough! If you did I wouldn't have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
coming here for years and you just started working here last month" << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}

void	Karen::complain(std::string level)
{

	typedef void	(Karen::*fncp)(void);

	std::map<std::string, fncp>	m;
	m["DEBUG"]    = &Karen::debug;
	m["INFO"]     = &Karen::info;
	m["WARNING"]  = &Karen::warning;
	m["ERROR"]    = &Karen::info;

	(this->*m[level])();
}