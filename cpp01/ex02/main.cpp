/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:35 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/09 14:49:09 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "&str      : " << &str << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
}