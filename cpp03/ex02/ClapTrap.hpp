/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:19:42 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/11 16:34:05 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int			_Hitpoints;
	int			_EnergyPoints;
	int			_AttackDmg;

public:
	ClapTrap(std::string name);										// Canonical
	ClapTrap(ClapTrap const &src);									// Canonical
	~ClapTrap();													// Canonical

	ClapTrap	&operator=(ClapTrap const &rhs);					// Canonical

	void	attack(std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif