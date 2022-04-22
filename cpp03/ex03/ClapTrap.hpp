/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:19:42 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 13:29:14 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
protected:
	ClapTrap();														// Canonical
	
	std::string		_name;
	unsigned int	_Hitpoints;
	unsigned int	_HitpointsMax;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDmg;
	
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);									// Canonical
	~ClapTrap();													// Canonical

	ClapTrap	&operator=(ClapTrap const &rhs);					// Canonical

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setEP(int ep);
};

#endif