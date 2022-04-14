/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:57:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 13:42:48 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();														//Canonical
	Dog(Dog const &src);										//Canonical
	~Dog();														//Canonical

	Dog	&operator=(Dog const &rhs);						    	//Canonical
	virtual void	makeSound();
};

#endif