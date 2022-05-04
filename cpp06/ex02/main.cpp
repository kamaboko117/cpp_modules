/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:45:37 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 15:13:58 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base	*generate(void){
	int	rng = std::rand();
	if (rng % 3 == 0)
		return (new A());
	else if (rng % 3 == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout << "Class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class is C" << std::endl;
}

void	identify(Base &p){
	Base	tmp;
	try {
		tmp = dynamic_cast<A&>(p);
		std::cout << "Class is A" << std::endl;
	} catch (std::exception & e) {
	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "Class is B " << std::endl;
	} catch (std::exception & e) {
	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "Class is C" << std::endl;
	} catch (std::exception & e){

	}}}
}

int	main(){
	Base	*base;
	
	std::srand(time(0));
	base = generate();
	identify(base);
	identify(*base);
}