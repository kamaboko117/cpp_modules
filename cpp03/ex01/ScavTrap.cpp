/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:24:17 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 15:45:50 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDmg = 20;
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	this->_name = src._name;
	this->_Hitpoints = src._Hitpoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDmg = src._AttackDmg;
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

void		ScavTrap::attack(std::string &target)
{
	std::cout << "ScavTrap "<< this->_name << " attacked " << target << ", causing " 
		<< this->_AttackDmg << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate Keeper mode"
		<< std::endl;
}