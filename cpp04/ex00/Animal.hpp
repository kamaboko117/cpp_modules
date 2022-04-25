/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:18:24 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 17:14:07 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();														//Canonical
	Animal(Animal const &src);										//Canonical
	virtual ~Animal();												//Canonical

	Animal	&operator=(Animal const &rhs);							//Canonical

	std::string getType() const;
	virtual void	makeSound();
};

#endif