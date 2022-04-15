/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:10:27 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/22 19:14:33 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I love getting extra bacon for my 7XL-double-cheese-triple-pi\
ckle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I can't believe youu have to pay to get extra bacon. You don’t\
put enough! If you did I wouldn't have to ask for it!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
coming here for years and you just started working here last month" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complaint[])( void ) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == complaintLevels[i])
			(this->*selectedComplaint)();
	}
}