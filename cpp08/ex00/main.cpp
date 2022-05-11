/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:26:43 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/11 12:58:26 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(){
	std::vector<int> a(4);
	
	for (size_t i = 0; i < 4; i++)
		a[i] = i;
	std::vector<int>::iterator	it = easyfind(a, 2);
	std::cout << *it << std::endl;
}