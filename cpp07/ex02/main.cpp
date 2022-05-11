/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:12:29 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/11 15:19:58 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

int	main(){
	Array<int> a(3);
	
	a[0] = 2;
	a[1] = 42;
	a[2] = 69;
	std::cout << "a: ";
	for (size_t i = 0; i < 3; i++)
		std::cout << a[i] << ",";
	std::cout << "size: " << a.size() << std::endl;
	Array<int> b(a);
	b[2] = 18;
	std::cout << "a: ";
	for (size_t i = 0; i < 3; i++)
		std::cout << a[i] << ",";
	std::cout << "size: " << a.size() << std::endl;
	std::cout << "b: ";
	for (size_t i = 0; i < 3; i++)
		std::cout << b[i] << ",";
	std::cout << "size: " << b.size() << std::endl;
	try{
		std::cout << a[-1] << std::endl;
	}catch(const std::exception& e){
		std::cout << e.what() << '\n';
	}
}