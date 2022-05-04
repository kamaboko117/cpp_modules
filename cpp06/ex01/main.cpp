/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:17:15 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:37:46 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int	main(){
	Data	data;
	Data	*ret;
	
	data.cm = 16;
	data.color = "white";
	ret = deserialize(serialize(&data));
	std::cout << "data cm: " << data.cm << "; data color: " << data.color
		<<  "; data address: " << &data << std::endl;
	std::cout << "ret cm:  " << ret->cm << "; ret color:  " << ret->color
		<<  "; ret address:  " << ret << std::endl;
}