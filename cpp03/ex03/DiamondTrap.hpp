/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:23:44 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 17:24:01 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(std::string name);									// Canonical
	DiamondTrap(DiamondTrap const &src);							// Canonical
	~DiamondTrap();													// Canonical

	DiamondTrap	&operator=(DiamondTrap const &rhs);					// Canonical

	void	attack(std::string const &target);
	void	whoAmI();
};
		

#endif