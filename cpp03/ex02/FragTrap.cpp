/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:47:16 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 13:27:46 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Hitpoints = 100;
	this->_HitpointsMax = 100;
	this->_EnergyPoints = 100;
	this->_AttackDmg = 30;
	std::cout << "FragTrap " << name << " has been created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::string	name;

	name = src._name;
	this->_name = name.append(" Copy");
	this->_Hitpoints = src._Hitpoints;
	this->_HitpointsMax = src._HitpointsMax;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDmg = src._AttackDmg;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_HitpointsMax = rhs._HitpointsMax;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDmg = rhs._AttackDmg;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

void		FragTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "FragTrap "<< this->_name << " attacked " << target
				<< ", causing \033[1;33m" << this->_AttackDmg
				<< "\033[0m points of damage! (EP: \033[1;34m"
				<< this->_EnergyPoints << "\033[0m)" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " tried to attack " << target
			<< " but is too exhausted..." << std::endl;
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