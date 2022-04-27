/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 15:02:56 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat	a("Dave", 5);
		Intern		intern;
		Form		*form;
		std::cout << std::endl;

		form = intern.makeForm("shrubbery creation", "park");
		a.signForm(*form);
		a.executeForm(*form);
		delete form;
		form = intern.makeForm("robotomy request", "Bender");
		a.executeForm(*form);
		a.signForm(*form);
		a.executeForm(*form);
		delete form;
		form = intern.makeForm("presidential pardon", "Bob");
		a.signForm(*form);
		a.executeForm(*form);
		delete form;
		// form = intern.makeForm("incorrect form", "lol");
		std::cout << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}