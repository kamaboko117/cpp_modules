/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:27:21 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/11 16:58:57 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_Hitpoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDmg = 0;
	std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	this->_name = src._name;
	this->_Hitpoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDmg = 0;
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

void		ClapTrap::attack(std::string &target)
{
	std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " 
		<< this->_AttackDmg << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_Hitpoints -= amount;
	if (this->_Hitpoints < 0)
		this->_Hitpoints = 0;
	std::cout << this->_name << " took " << amount << " points of damge! HP: " 
		<< this->_Hitpoints << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_Hitpoints += amount;
	std::cout << this->_name << " has been repaired for " << amount
		<< " Hitpoints! HP: " << this->_Hitpoints << std::endl;
}