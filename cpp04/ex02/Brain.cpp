/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:19:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 14:24:25 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

//CANON

Brain::Brain(){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src){
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain  &Brain::operator=(Brain const &src){
    int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
    return (*this);
}
