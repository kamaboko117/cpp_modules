/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:31:03 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/19 17:27:40 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) 
{
	Point	a(-0.44, 1.42);
	Point	b(2.22, 0.92);
	Point	c(-1, -0.5);
	Point	point(-0.98, -0.45);

	std::cout << bsp(a, b, c, point) << std::endl;
}