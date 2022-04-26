/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:53:28 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 15:07:39 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(){
	try{
		Bureaucrat	a("Dave", 5);
		Form		form("Acquisition papers", 5, 5);

		std::cout << form << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat	a("Dave", 5);
		Form		form("Acquisition papers", 0, 151);

		std::cout << form << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}