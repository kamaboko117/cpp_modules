/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:51:43 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/10 16:25:11 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	strRepeat(T &t){
	t += t;
}

int	main(){
	std::string tab[] = {"pouet", "plouf", "lol"};

	::iter<std::string>(tab, 3, &strRepeat);
	for (size_t i = 0; i < 3; i++)
		std::cout << tab[i] << std::endl;
}