/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:56:44 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/10 14:02:09 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
	std::string	_type = "weapon";
public:
	Weapon();
	~Weapon();

	const std::string	&getType();
	void				setType(std::string);
};

#endif