/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:31:03 by asaboure          #+#    #+#             */
/*   Updated: 2022/01/04 18:38:38 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) 
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);
	std::cout << std::endl;
	
	a = Fixed(1234.4321f);
	std::cout << std::endl;
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << std::endl;
	
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "b > a: " << (b > a) << std::endl;
	std::cout << std::endl;
	
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "b < a: " << (b < a) << std::endl;
	std::cout << std::endl;

	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "b >= a: " << (b >= a) << std::endl;
	std::cout << "b >= d: " << (b >= d) << std::endl;
	std::cout << std::endl;
	
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "b <= a: " << (b <= a) << std::endl;
	std::cout << "b >= d: " << (b >= d) << std::endl;
	std::cout << std::endl;
	
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "b == a: " << (b == a) << std::endl;
	std::cout << "b == d: " << (b == d) << std::endl;
	std::cout << std::endl;

	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "b != a: " << (b != a) << std::endl;
	std::cout << "b != d: " << (b != d) << std::endl;
	std::cout << std::endl;

	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "b + a: " << (b + a) << std::endl;
	std::cout << "b + d: " << (b + d) << std::endl;
	std::cout << std::endl;

	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "b - a: " << (b - a) << std::endl;
	std::cout << "b - d: " << (b - d) << std::endl;
	std::cout << std::endl;

	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "b * a: " << (b * a) << std::endl;
	std::cout << "b * d: " << (b * d) << std::endl;
	std::cout << std::endl;
	
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << "b / a: " << (b / a) << std::endl;
	std::cout << "b / d: " << (b / d) << std::endl;
	std::cout << std::endl;

	a = b++;
	std::cout << "a = b++: a(raw)=" << a.getRawBits() << " b(raw)="
		<< b.getRawBits() << std::endl;
	a = ++b;
	std::cout << "a = ++b: a(raw)=" << a.getRawBits() << " b(raw)="
		<< b.getRawBits() << std::endl;
	a = b--;
	std::cout << "a = b--: a(raw)=" << a.getRawBits() << " b(raw)="
		<< b.getRawBits() << std::endl;
	a = --b;
	std::cout << "a = --b: a(raw)=" << a.getRawBits() << " b(raw)="
		<< b.getRawBits() << std::endl;
	std::cout << std::endl;

	std::cout << "a: " << a << " c: " << c << std::endl;
	std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c): " << Fixed::max(a, c) << std::endl;
}