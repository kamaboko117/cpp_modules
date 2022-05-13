/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:37:30 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/13 12:38:09 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "[SUBJECT MAIN]" << std::endl;
	srand(time(0));
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "[RANDOM 50000 SPAN]" << std::endl;
	Span sp2(50000);
	std::vector<int> v(50000);
	for (size_t i = 0; i < 50000; i++)
		v[i] = rand();
	sp2.addNumber(v.begin(), v.end());
	std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest : " << sp2.longestSpan() << std::endl;

	std::cout << "[1 SPAN]" << std::endl;
	Span sp3(1);
	sp3.addNumber(42);
	
	std::cout << "shortest: ";
	try{
		std::cout << sp3.shortestSpan() << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "longest : ";
	try{
		std::cout << sp3.longestSpan() << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "[TRY TO ADD ABOVE LIMITS]" << std::endl;
	Span sp4(1);
	try{
		sp4.addNumber(42);
		sp4.addNumber(69);
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}