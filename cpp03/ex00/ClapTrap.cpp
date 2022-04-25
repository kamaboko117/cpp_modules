/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:27:21 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/25 13:39:26 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name) , _HitpointsMax(10)
{
	this->_Hitpoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDmg = 0;
	std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _HitpointsMax(src._HitpointsMax)
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
	this->_HitpointsMax = rhs._HitpointsMax;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

void		ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << this->_name << " attacked " << target << ", causing \033[1;33m" 
			<< this->_AttackDmg << "\033[0m points of damage! (EP: \033[1;34m"
			<< this->_EnergyPoints << "\033[0m)" << std::endl;
	}
	else
		std::cout << this->_name << " tried to attack " << target
			<< " but is too exhausted..." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_Hitpoints -= amount;
	if (this->_Hitpoints < 0)
		this->_Hitpoints = 0;
	std::cout << this->_name << " took \033[1;33m" << amount
		<< "\033[0m points of damage! (HP:\033[1;31m " 
		<< this->_Hitpoints << "\033[0m)" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0)
	{
		this->_Hitpoints += amount;
		if (this->_Hitpoints > this->_HitpointsMax)
			this->_Hitpoints = this->_HitpointsMax;
		this->_EnergyPoints--;
		std::cout << this->_name << " has been repaired for \033[1;31m" << amount
			<< "\033[0m Hitpoints! (HP: \033[1;31m" << this->_Hitpoints
			<< "\033[0m)" << std::endl;
	}
	else
		std::cout << this->_name << " tried to repair itself but is too exhausted..."
			<< std::endl;
}

void	ClapTrap::setEP(int ep){
	ep = ep < 0 ? 0 : ep;
	this->_EnergyPoints = ep;
	std::cout << this->_name << "'s Energy Points set to \033[1;34m" << this->_EnergyPoints
		<< "\033[0m" << std::endl; 
}