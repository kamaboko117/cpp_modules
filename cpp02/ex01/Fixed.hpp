/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:18:31 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/29 16:59:58 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_value;
	static const int	_range = 8;
	
public:
	Fixed();														// Canonical
	Fixed(Fixed const &src);										// Canonical
	~Fixed();														// Canonical

	Fixed	&operator=(Fixed const &rhs);							// Canonical

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif