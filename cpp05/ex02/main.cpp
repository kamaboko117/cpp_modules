/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 13:27:25 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat				a("Dave", 5);
		Bureaucrat				b("Paul", 6);
		ShrubberyCreationForm	shrub("Garden");
		RobotomyRequestForm		robotomy("Bob");
		PresidentialPardonForm	pardon("Bob");
		
		std::cout << std::endl << shrub << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl << std::endl;
		a.executeForm(shrub);
		b.executeForm(robotomy);
		b.executeForm(pardon);
		a.signForm(shrub);
		a.signForm(pardon);
		b.signForm(robotomy);
		b.executeForm(shrub);
		a.executeForm(robotomy);
		b.executeForm(pardon);
		a.executeForm(pardon);
		std::cout << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}