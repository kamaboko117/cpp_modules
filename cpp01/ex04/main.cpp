/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:35 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/16 14:50:50 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int	usage()
{
	std::cout << "usage: ./replace <FILENAME> <string1> <string2>" << std::endl;
	return (0);
}

void	replace(std::string &str, std::string s1, std::string s2)
{
	size_t	index;

	while ((index = str.find(s1)) != std::string::npos) 
		str.replace(index, s2.length(), s2);
}

int	main(int ac, char **av)
{

	if (ac != 4)
		return (usage());
	std::string			filename(av[1]);
	std::string			replacename = filename;
	std::ofstream		out(replacename.append(".replace"));
	std::ifstream		in(filename);
	std::stringstream	bufstream;
	std::string			s1(av[2]);
	std::string			s2(av[3]);
	
	if (out.is_open() && in.is_open())
	{
		
		bufstream << in.rdbuf();
		std::string buf = bufstream.str();
		replace(buf, s1, s2);
		out << buf;
	}
	else
		std::cout << "cannot open file" << std::endl;

	in.close();
	out.close();
}