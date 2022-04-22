/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:24:17 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 13:29:33 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_HitpointsMax = 100;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDmg = 20;
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::string	name;
	name = src._name;
	this->_name = name.append(" Copy");
	this->_Hitpoints = src._Hitpoints;
	this->_HitpointsMax = src._HitpointsMax;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDmg = src._AttackDmg;
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_HitpointsMax = rhs._HitpointsMax;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

void		ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "ScavTrap "<< this->_name << " attacked " << target
				<< ", causing \033[1;33m" << this->_AttackDmg
				<< "\033[0m points of damage! (EP: \033[1;34m"
				<< this->_EnergyPoints << "\033[0m)" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " tried to attack " << target
			<< " but is too exhausted..." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate Keeper mode"
		<< std::endl;
}