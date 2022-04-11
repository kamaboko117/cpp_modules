/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:13:40 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/11 16:19:01 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);										// Canonical
	ScavTrap(ClapTrap const &src);									// Canonical
	~ScavTrap();													// Canonical

	ScavTrap	&operator=(ScavTrap const &rhs);					// Canonical

	void	attack(std::string &target);
};

#endif