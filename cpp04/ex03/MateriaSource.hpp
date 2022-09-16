/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:30:40 by asaboure          #+#    #+#             */
/*   Updated: 2022/09/16 13:50:52 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*inventory[4];
	size_t		inventorySize;
	
public:
	MateriaSource();													//CANON
	MateriaSource(MateriaSource const &src);							//CANON
	~MateriaSource();													//CANON

	MateriaSource	&operator=(MateriaSource const &rhs);				//CANON

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif