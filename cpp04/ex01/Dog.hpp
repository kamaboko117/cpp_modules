/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:57:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/25 17:46:32 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;
public:
	Dog();														//Canonical
	Dog(Dog const &src);										//Canonical
	~Dog();														//Canonical

	Dog				&operator=(Dog const &rhs);				   	//Canonical
	virtual Animal	&operator=(Animal const &src);
	virtual void	makeSound();
	Brain			*getBrain() const;
};

#endif