/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:35 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/28 12:07:17 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	usage()
{
	std::cout << "usage: ./karenFilter <log level>" << std::endl;
	return (0);
}

enum Options{DEFAULT, DEBUG, INFO, WARNING, ERROR};

Options	resolveOption(std::string input)
{
	if( input == "DEBUG" ) return DEBUG;
	if( input == "INFO" ) return INFO;
	if( input == "WARNING" ) return WARNING;
	if( input == "ERROR" ) return ERROR;

    return DEFAULT;
}

int	main(int ac, char **av)
{
	Karen	Karen;

	if (ac != 2)
		return	(usage());
	
	switch (resolveOption(av[1]))
	{
	case DEBUG:
		std::cout << "[ DEBUG ]" << std::endl;
		Karen.complain("DEBUG");
	case INFO:
		std::cout << "[ INFO ]" << std::endl;
		Karen.complain("INFO");
	case WARNING:
		std::cout << "[ WARNING ]" << std::endl;
		Karen.complain("WARNING");
	case ERROR:
		std::cout << "[ ERROR ]" << std::endl;
		Karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
	}
}