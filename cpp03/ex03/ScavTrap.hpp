/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:13:40 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 16:58:23 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(std::string name);										// Canonical
	ScavTrap(ScavTrap const &src);									// Canonical
	~ScavTrap();													// Canonical

	ScavTrap	&operator=(ScavTrap const &rhs);					// Canonical

	void	attack(std::string const &target);
	void 	guardGate();
};

#endif