/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:15:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 14:17:51 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
public:
	Brain();														//Canonical
	Brain(Brain const &src);										//Canonical
	~Brain();														//Canonical

	Brain	&operator=(Brain const &rhs);						   	//Canonical
	std::string	ideas[100];
};

#endif