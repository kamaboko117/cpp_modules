/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:00:35 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/16 14:11:11 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();																//CANON
	Cure(Cure const &src);												//CANON
	~Cure();															//CANON

	Cure	&operator=(Cure const &rhs);								//CANON
	
	virtual AMateria	*clone() const;
	virtual void		use(ICharacter &target);
};

#endif