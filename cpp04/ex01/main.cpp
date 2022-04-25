/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:07:01 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/25 17:38:51 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define NUMBER_OF_ANIMALS	8

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;
// 	delete i;

// 	return 0;
// }

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;
	
	std::cout << "[CONSTRUCT " << NUMBER_OF_ANIMALS << " DOGS AND CATS]" << std::endl;
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	brain = animals[7]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";

	std::cout << std::endl << "set 7th's ideas:" << std::endl;
	for (size_t i = 0; i < 4; i++)
		std::cout << animals[7]->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl << "assign 7th's brain to 5:" << std::endl;
	*(animals[5]) = *(animals[7]);
	for (size_t i = 0; i < 4; i++)
		std::cout << animals[5]->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl << "[DESTRUCT]" << std::endl;
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];

	std::cout << std::endl;
	const Dog	*dog = new Dog();
	brain = dog->getBrain();
	brain->ideas[0] = "I want to play";
	brain->ideas[1] = "Such excitement";
	brain->ideas[2] = "Wow";
	brain->ideas[3] = "Bones!!!!";
	std::cout << std::endl << "set dog's ideas: " << std::endl;
	for (size_t i = 0; i < 4; i++)
		std::cout << dog->getBrain()->ideas[i] << std::endl;
	const Dog	*dogcopy(dog);
	std::cout << std::endl << "dogcopy ideas: " << std::endl;
	for (size_t i = 0; i < 4; i++)
		std::cout << dogcopy->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;
	delete dog;
}