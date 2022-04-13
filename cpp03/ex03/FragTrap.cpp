/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:47:16 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 16:15:45 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Hitpoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDmg = 30;
	std::cout << "FragTrap " << name << " has been created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	this->_name = src._name;
	this->_Hitpoints = src._Hitpoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDmg = src._AttackDmg;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

void		FragTrap::attack(std::string &target)
{
	std::cout << "FragTrap "<< this->_name << " attacked " << target << ", causing " 
		<< this->_AttackDmg << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::string	cmd;

	std::cout << "FragTrap " << this->_name << " proposes a High Five! Accept? (y/n)"
		<< std::endl;
	while (69)
	{
		std::getline(std::cin, cmd);
		if (!cmd.compare("y"))
		{
			std::cout << "High Five!" << std::endl;
			return ;
		}
		if (!cmd.compare("n"))
		{
			std::cout << "Awkward... " << std::endl;
			return ;
		}
	}
}