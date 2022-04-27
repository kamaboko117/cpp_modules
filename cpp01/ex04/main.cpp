/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:35 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 12:39:43 by asaboure         ###   ########.fr       */
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

void	ft_replace(std::string &str, size_t index, std::string s1, std::string s2)
{
	str.erase(index, s1.length());
	str.insert(index, s2);
}

void	replace(std::string &str, std::string s1, std::string s2)
{
	size_t	index;
	size_t	offset;

	offset = 0;
	while ((index = str.find(s1, offset)) != std::string::npos)
	{
		ft_replace(str, index, s1, s2);
		offset = index + s2.length();
	}
}

int	main(int ac, char **av)
{

	if (ac != 4 || av[2][0] == 0)
		return (usage());
	std::string			filename(av[1]);
	std::string			replacename = filename;
	std::ofstream		out(replacename.append(".replace").c_str());
	std::ifstream		in(filename.c_str());
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