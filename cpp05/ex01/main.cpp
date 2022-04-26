/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 16:05:32 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat	a("Dave", 5);
		Bureaucrat	b("Paul", 5);
		Form		form("Acquisition papers", 5, 5);

		std::cout << form << std::endl;
		a.signForm(form);
		b.signForm(form);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat	a("Gordon", 5);
		Form		form("Acquisition papers", 0, 151);

		std::cout << form << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat	a("Lee", 5);
		Form		form("Acquisition papers", 4, 4);

		std::cout << form << std::endl;
		a.signForm(form);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}