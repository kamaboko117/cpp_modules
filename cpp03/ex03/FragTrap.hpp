/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:15:19 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 13:29:23 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(std::string name);										// Canonical
	FragTrap(FragTrap const &src);									// Canonical
	~FragTrap();													// Canonical

	FragTrap	&operator=(FragTrap const &rhs);					// Canonical

	void	attack(const std::string &target);
	void 	highFivesGuys();
};

#endif