/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:39:50 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 18:35:05 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(){}

Intern::Intern(Intern const&){}

Intern::~Intern(){}

Intern	&Intern::operator=(Intern const&){
	return (*this);
}

//ETC

Form	*Intern::makeShrub(std::string const target) const{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomy(std::string const target) const{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePardon(std::string const target) const{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string name, std::string target) const{
	Form	*(Intern::*Forms[])(std::string const target) const = {
			&Intern::makeShrub,
			&Intern::makeRobotomy,
			&Intern::makePardon,
	};
	std::string FormTypes[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};
	for (size_t i = 0; i < 3; i++)
	{
		Form	*(Intern::*selectedForm)(std::string const target) const = Forms[i];
		if (name == FormTypes[i])
			return ((this->*selectedForm)(target));
	}
	std::cout << "Intern: Form type doesn't exist" << std::endl;
	return (NULL);
}
