/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 13:50:52 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat	a("Dave", 5);
		std::cout << a << std::endl;
		a.downgrade();
		std::cout << a << std::endl;
		a.upgrade();
		std::cout << a << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		Bureaucrat	a("Gordon", 0);
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	
	try{
		Bureaucrat	a("Eva", 151);
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		Bureaucrat	a("Chloe", 1);
		a.upgrade();
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
}