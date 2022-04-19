/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:07:42 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/19 15:30:54 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(float const x, float const y) : x(x), y(y){}

Point::Point(Point const &src) : x(src.x), y(src.y){}

Point::~Point(){}

Fixed	Point::getX() const{
	return (this->x);
}

Fixed	Point::getY() const{
	return (this->y);
}
//test this shit
Point &Point::operator=(Point &rhs){
	this->~Point();
	float	newx = rhs.getX().toFloat();
	float	newy = rhs.getY().toFloat(); 
	new(this) Point(newx, newy);
	return (*this);
}