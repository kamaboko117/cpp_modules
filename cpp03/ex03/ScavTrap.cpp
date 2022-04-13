/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:24:17 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 14:09:29 by asaboure         ###   ########.fr       */
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