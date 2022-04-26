/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:59:50 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:20:41 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();														//Canonical
	Cat(Cat const &src);										//Canonical
	~Cat();														//Canonical

	Cat	&operator=(Cat const &rhs);						    	//Canonical
	virtual void	makeSound() const;
};

#endif