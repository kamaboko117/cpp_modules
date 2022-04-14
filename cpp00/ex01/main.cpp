/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:39:10 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/13 20:02:02 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

static void	title()
{
	std::cout << "Welcome to your PHONEBOOK ! " << std::endl;
	std::cout << "Commands are: ADD | SEARCH | EXIT" << std::endl;
}

static void	add_contact(PhoneBook *agenda)
{
	std::string	entry;
	static int	i = 0;

	if (i == 8)
		i = 0;
	// get first name
	do{
		std::cout << "Contact's first name: ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return ;
	}while (entry.find_first_not_of(" \t\n\v\f\r") == std::string::npos);
	agenda->Contact[i].setFirstName(entry);

	// get last name
	do{
		std::cout << "Contact's last name: ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return ;
	}while (entry.find_first_not_of(" \t\n\v\f\r") == std::string::npos);
	agenda->Contact[i].setLastName(entry);

	// get nickname
	do{
		std::cout << "Contact's nickname: ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return ;
	}while (entry.find_first_not_of(" \t\n\v\f\r") == std::string::npos);
	agenda->Contact[i].setNickname(entry);

	// get phone number
	do{
		std::cout << "Contact's phone number: ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return ;
	}while (entry.find_first_not_of(" \t\n\v\f\r") == std::string::npos);
	agenda->Contact[i].setPhoneNumber(entry);
	
	// get darkest secret
	do{
		std::cout << "Contact's darkest secret: ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return ;
	}while (entry.find_first_not_of(" \t\n\v\f\r") == std::string::npos);
	agenda->Contact[i].setDarkestSecret(entry);
	std::cout << "Contact successfully added" << std::endl;
	i++;
}

static void	crop(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::cout << std::setw(10);
  		std::cout << str;
	}
}

static void	display_contacts(PhoneBook agenda)
{
	int	i;

	i = 0;
	while (i < 8 && agenda.Contact[i].getFirstName() != "")
	{
		std::cout <<   "        " << i << "|";
		crop(agenda.Contact[i].getFirstName());
		std::cout << "|";
		crop(agenda.Contact[i].getLastName());
  		std::cout << "|";
		crop(agenda.Contact[i].getNickname());
  		std::cout << std::endl;
		i++;
	}
}

static bool	is_number(const std::string &s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

static void	display_info(PhoneBook agenda, int x)
{
	std::cout << "First name    : " << agenda.Contact[x].getFirstName() << std::endl;
	std::cout << "Last name     : " << agenda.Contact[x].getLastName() << std::endl;
	std::cout << "Nickname      : " << agenda.Contact[x].getNickname() << std::endl;
	std::cout << "Phone Number  : " << agenda.Contact[x].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << agenda.Contact[x].getDarkestSecret() << std::endl;
}

static void	search_contact(PhoneBook agenda)
{
	std::string			entry;
	
	display_contacts(agenda);
	std::cout << "Select a contact index: ";
	std::getline(std::cin, entry);
	if (std::cin.eof())
		return ;
	if (!is_number(entry) || std::atoi(entry.c_str()) >= 8 || std::atoi(entry.c_str()) < 0)
		std::cout << "wrong input" << std::endl;
	else
		display_info(agenda, std::atoi(entry.c_str()));	
}

static void	read_cmd(PhoneBook *agenda)
{
	std::string	cmd;

	std::getline(std::cin, cmd);
	if (std::cin.eof())
		return ;
	if (!cmd.compare("ADD"))
		add_contact(agenda);
	if (!cmd.compare("SEARCH"))
		search_contact(*agenda);
	if (!cmd.compare("EXIT"))
		return ;
	read_cmd(agenda);
}

int	main()
{
	PhoneBook agenda;

	title();
	read_cmd(&agenda);
}