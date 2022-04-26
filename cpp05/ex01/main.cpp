/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 14:44:22 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat	a("Dave", 5);
		Form		form("Acquisition papers", 5, 5);
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
}