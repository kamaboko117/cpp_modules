/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:53:52 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/22 17:23:41 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();													//Canonical
	WrongAnimal(WrongAnimal const &src);							//Canonical
	virtual ~WrongAnimal();											//Canonical

	WrongAnimal	&operator=(WrongAnimal const &rhs);					//Canonical

	std::string getType() const;
	void	makeSound() const;
};

#endif