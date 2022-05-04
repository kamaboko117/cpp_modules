/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:53:38 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:10:18 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>
#include <sstream>
#include "convert.hpp"

int		ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	convertFromChar(char value){
	std::cout << "char: " << value << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
		<< static_cast<float>(value) << "f" << std::endl;
 	std::cout << "double: " << static_cast<double>(value) << std::endl;
	return (TYPE_CHAR);
}

int	convertFromInt(double value){
	std::stringstream	tmp;

	if (ft_isalnum(static_cast<int>(value)))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	tmp << std::fixed << value;
	std::string str = tmp.str();
	str = str.substr(0, str.find_last_not_of('0') + 1);
	if (str.find('.') == str.size() - 1)
		str += "0";
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	return (TYPE_INT);
}

int	convertFromFloat(double value){
	std::stringstream	tmp;

	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: overflow" << std::endl;
	tmp << std::fixed << value;
	std::string str = tmp.str();
	str = str.substr(0, str.find_last_not_of('0') + 1);
	if (str.find('.') == str.size() - 1)
		str += "0";
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	return (TYPE_FLOAT);
}

int	convertFromDouble(double value){
	std::stringstream	tmp;

	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: overflow" << std::endl;
	tmp << std::fixed << value;
	std::string str = tmp.str();
	str = str.substr(0, str.find_last_not_of('0') + 1);
	if (str.find('.') == str.size() - 1)
		str += "0";
	std::cout << "float: overflow" << std::endl;
	std::cout << "double: " << str << std::endl;
	return (TYPE_DOUBLE);
}

int	getType(std::string input){
	double	value;
	char	*pEnd;

	if (input.length() == 1 && isalpha(input[0]))
		return (convertFromChar(input[0]));
	value = strtod(input.c_str(), &pEnd);
	if (std::string(pEnd).length() != 0 && !(std::string(pEnd).length() == 1 && pEnd[0] == 'f'))
		return (TYPE_UNKNOWN);
	if (value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min())
		return (convertFromInt(value));
	if (((value <= FLOAT_MAX && value >= FLOAT_MIN) || ISNAN(value)
		|| value == INFINITY || value == -INFINITY))
		return (convertFromFloat(value));
	return (convertFromDouble(value));
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
	if (type == 4)
		std::cout << "Error: Bad input" << std::endl;
}