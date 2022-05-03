/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:53:38 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/03 18:59:53 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>
#include "convert.hpp"
#define ISNAN(x) x != x

int	convertFromChar(char value){
	std::cout << "char: " << value << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
		<< static_cast<float>(value) << "f" << std::endl;
 	std::cout << "double: " << static_cast<double>(value) << std::endl;
	return (TYPE_CHAR);
}

int	convertFromInt(double value){
	if (isalnum(static_cast<int>(value)))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
		<< static_cast<float>(value) << "f" << std::endl;
	return (TYPE_INT);
}

int	getType(std::string input){
	double	value;
	char	*pEnd;

	if (input.length() == 1 && isalpha(input[0]))
		return (convertFromChar(input[0]));
	value = strtod(input.c_str(), &pEnd);
	if (value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min())
		return (convertFromInt(value));
	if (std::string(pEnd).length() == 1 && pEnd[0] == 'f'
		&& ((value <= FLOAT_MAX && value >= FLOAT_MIN) || ISNAN(value)
		|| value == INFINITY || value == -INFINITY))
		return (TYPE_FLOAT);
	if (std::string(pEnd).length() != 0)
		return (TYPE_UNKNOWN);
	return (TYPE_DOUBLE);
}

int	main(int ac, char **av){
	int	type;
	
	if (ac != 2){
		std::cout << "Error: Bad arguments" << std::endl;
		return (0);
	}
	std::string input(av[1]);
	if (!input.length()){
		std::cout << "Error: Empty input" << std::endl;
		return (0);
	}
	type = getType(input);
	std::cout << type << std::endl;
}