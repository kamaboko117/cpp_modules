/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:31:03 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/16 15:03:24 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// int main(void) 
// {
// 	Fixed a;
// 	Fixed b(a);
// 	Fixed c;

// 	c = b;
	
// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	return 0;
// }

int main(void) 
{
	Fixed a;
	a.setRawBits(69);
	Fixed b(a);
	a.setRawBits(42);
	Fixed c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
