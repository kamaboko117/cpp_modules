/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:18:24 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/25 16:53:42 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	Animal();														//Canonical
	Animal(Animal const &src);										//Canonical
	virtual ~Animal();												//Canonical

	virtual Animal	&operator=(Animal const &rhs);					//Canonical

	std::string 	getType() const;
	virtual Brain	*getBrain() const = 0;
	virtual void	makeSound();
};

#endif