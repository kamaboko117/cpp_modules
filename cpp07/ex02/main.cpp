/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:12:29 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/10 20:10:29 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(){
	Array<int> a(3);
	
	a[0] = 2;
	a[1] = 42;
	a[2] = 69;
	std::cout << "a: ";
	for (size_t i = 0; i < 3; i++)
		std::cout << a[i] << ",";
	std::cout << "size: " << a.size() << std::endl;
	Array<int> b(a);
	b[2] = 18;
	std::cout << "a: ";
	for (size_t i = 0; i < 3; i++)
		std::cout << a[i] << ",";
	std::cout << "size: " << a.size() << std::endl;
	std::cout << "b: ";
	for (size_t i = 0; i < 3; i++)
		std::cout << b[i] << ",";
	std::cout << "size: " << b.size() << std::endl;
	try{
		std::cout << a[-1] << std::endl;
	}catch(const std::exception& e){
		std::cout << e.what() << '\n';
	}
}