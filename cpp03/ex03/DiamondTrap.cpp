/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:36:22 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 13:18:53 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDmg = FragTrap::_AttackDmg;
	std::cout << "DiamondTrap " << name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap::FragTrap(src), ScavTrap::ScavTrap(src)
{
	this->_name = src._name;
	this->_Hitpoints = src._Hitpoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDmg = src._AttackDmg;
	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name: " << this->_name << " | ClapTrap name: " << ClapTrap::_name 
		<< std::endl;
}