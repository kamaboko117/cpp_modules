/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:18:31 by asaboure          #+#    #+#             */
/*   Updated: 2022/01/04 18:17:44 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <ostream>

class Fixed
{
private:
	int					_value;
	static const int	_range = 8;
	
public:
	Fixed();														// Canonical
	Fixed(Fixed const &src);										// Canonical
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();														// Canonical

	Fixed	&operator=(Fixed const &rhs);							// Canonical
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	Fixed	operator++(int);
	Fixed	operator++();
	Fixed	operator--(int);
	Fixed	operator--();

	float			toFloat(void) const;
	int				toInt(void) const;
	static Fixed	&min(Fixed &f1, Fixed &f2);
	static Fixed	&max(Fixed &f1, Fixed &f2);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif