/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:04:59 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/19 15:29:53 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
	Point();
	Point(float const x, float const y);
	Point(Point const &src);
	~Point();

	Point	&operator=(Point &rhs);

	Fixed	getX() const;
	Fixed	getY() const;
};

#endif