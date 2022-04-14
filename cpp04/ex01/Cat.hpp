/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:59:50 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 14:26:22 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();														//Canonical
	Cat(Cat const &src);										//Canonical
	~Cat();														//Canonical

	Cat	&operator=(Cat const &rhs);						    	//Canonical
	virtual void	makeSound();
};

#endif