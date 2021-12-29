/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:26:53 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/29 20:28:21 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/***************************CONSTRUCT/DESTRUCT*********************************/
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = src._value;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	long	newnb = nb;

	newnb = newnb << 8;
	this->_value = newnb;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	double	newnb = nb;

	newnb = newnb * (1 << 8);
	this->_value = roundf(newnb);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/***************************OPERATORS******************************************/
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}

/***************************MEMBER FUNCTIONS***********************************/
int		Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::toInt() const
{
	return ((this->getRawBits()) >> 8);
}

float	Fixed::toFloat() const
{
	return ((this->getRawBits()) / (float)(1 << 8));
}