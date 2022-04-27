/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 11:35:15 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat				a("Dave", 5);
		Bureaucrat				b("Paul", 5);
		ShrubberyCreationForm	form("Garden");

		std::cout << form << std::endl;
		a.executeForm(form);
		b.executeForm(form);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}

}