/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:38:32 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/16 15:39:50 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();																//CANON
	Ice(Ice const &src);												//CANON
	~Ice();																//CANON

	Ice	&operator=(Ice const &rhs);										//CANON
	
	virtual AMateria	*clone() const;
	virtual void		use(ICharacter &target);
};

#endif