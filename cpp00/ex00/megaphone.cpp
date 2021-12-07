/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:41:24 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/07 13:00:28 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	std::locale	loc;
	
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			for (size_t j = 0; j < std::strlen(av[i]); j++)
				std::cout << std::toupper(av[i][j], loc);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}