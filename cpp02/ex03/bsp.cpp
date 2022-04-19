/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:21:14 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/19 17:36:09 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
// #include <iostream>
// Fixed	getPlane(Point const a, Point const b, Point const point){
// 	return ((a.getY() - b.getY()) * point.getX() + (a.getX() - b.getX())
// 						* point.getY() + (a.getX() * b.getY() - b.getX() * a.getY()));
// }

// bool	bsp(Point const a, Point const b, Point const c, Point const point){
// 	std::cout << (1.42 - 0.92) * 0 + (-0.44 - 2.22) * 2 + (-0.44 * 0.92 - 2.22 * 1.42)
// 						 << std::endl;
// 	std::cout << getPlane(a,b,c) << " : " << getPlane(a,b,point) << std::endl;
// 	if (getPlane(a, b, c) * getPlane(a, b, point) <= 0)
// 		return (false);
// 	std::cout << getPlane(a,c,b) << " : " << getPlane(a,c,point) << std::endl;
// 	if (getPlane(a, c, b) * getPlane(a, c, point) <= 0)
// 		return (false);
// 	std::cout << getPlane(b,c,a) << " : " << getPlane(b,c,point) << std::endl;
// 	if (getPlane(b, c, a) * getPlane(b, c, point) <= 0)
// 		return (false);
// 	return (true);
// }

// Fixed	getArea(Point const a, Point const b, Point const c){
// 	Fixed i((float)0.5);
// 	return (i * (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY())
// 				+ c.getX() * (c.getY() - b.getY())));
// }

// bool	bsp(Point const a, Point const b, Point const c, Point const point){
// 	Fixed ABC = getArea(a, b, c);
// 	Fixed ABD = getArea(a, b, point);
// 	Fixed BCD = getArea(b, c, point);
// 	Fixed ACD = getArea(a, c, point);

// 	if (ABC == 0 || ABD == 0|| BCD == 0|| ACD == 0)
// 		return (false);
// 	if (ABD + BCD + ACD == ABC)
// 		return (true);
// 	return (false);
// }

//https://www.youtube.com/watch?v=HYAgJN3x4GA
bool	bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed	Ax = a.getX();
	Fixed	Ay = a.getY();
	Fixed	Bx = b.getX();
	Fixed	By = b.getY();
	Fixed	Cx = c.getX();
	Fixed	Cy = c.getY();
	Fixed	Px = point.getX();
	Fixed	Py = point.getY();
	
	Fixed	w1 = (Ax * (Cy-Ay) + (Py-Ay) * (Cx-Ax) - Px * (Cy-Ay)) /
				((By-Ay) * (Cx-Ax) - (Bx-Ax) * (Cy-Ay));
	Fixed	w2 = (Py - Ay - w1 * (By-Ay)) / (Cy-Ay);
	
	return (w1 >= 0 && w2 >= 0 && w1 + w2 < 1);
}