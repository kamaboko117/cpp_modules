/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:11:09 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/16 15:55:10 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(std::string const &type);

	std::string const	&getType() const; //Returns the materia type
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif