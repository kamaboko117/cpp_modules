/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:05 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:21:26 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();														//Canonical
	WrongCat(WrongCat const &src);									//Canonical
	~WrongCat();													//Canonical

	WrongCat	&operator=(WrongCat const &rhs);					//Canonical
	void	makeSound() const;
};

#endif