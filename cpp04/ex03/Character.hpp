/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:42:01 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/19 15:07:38 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	Character();														//CANON
	
	std::string	_name;
	AMateria	*inventory[4];
	size_t		inventorySize;
public:
	Character(std::string const &name);
	Character(Character const &src);									//CANON
	~Character();														//CANON

	Character	&operator=(Character const &rhs);						//CANON
	
	virtual std::string const	&getName() const;
	
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
};

#endif