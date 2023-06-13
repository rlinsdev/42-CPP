/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:40:22 by rlins             #+#    #+#             */
/*   Updated: 2023/06/13 07:46:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Animal.hpp>
#include <Color.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

void	subjectTest();
void	kennelTest(int nbAnimals);
void	dogCopyTest();

int	main(void) {

	// // Subject tests
	// subjectTest();

	// // Kennel test
	// kennelTest(5);

	// Dog Copy
	// dogCopyTest();

	return (0);
}

/**
 * @brief Building a Kennel. Instance the class Animal and generate
 * Cats and dogs
 * @param nbAnimals
 */
void	kennelTest(int nbAnimals) {

	std::cout << BG_WHITE BLACK "Kennel test! Let's make some animals! (Cats and dogs)" RESET << std::endl;

	Animal *arrAnimals[nbAnimals + 1]; // ? mais 1??
	arrAnimals[nbAnimals] = NULL; // Precisa?

	int nbCats = (nbAnimals / 2);
	int nbDogs = nbAnimals - (nbAnimals / 2);

	std::cout << PURPLE << "\tWe got " << nbAnimals << " Animals in total. " << nbCats << " cats and " << nbDogs
		<< " Dogs" << RESET << std::endl;

	for (int i = 0; i < nbCats; i++) {
		arrAnimals[i] = new Cat();
	}
	for (int i = nbCats; i < nbAnimals; i++) {
		arrAnimals[i] = new Dog();
	}

	std::cout << ITAL << PURPLE << "\tCats and dogs out of control!!!" << RESET << std::endl;
	for (int i = 0; arrAnimals[i]; i++) {
		arrAnimals[i]->makeSound();
	}

	std::cout << ITAL << PURPLE << "\tPutting the loud animals to rest..." << RESET << std::endl;
	for (int i = 0; arrAnimals[i]; i++) {
		delete arrAnimals[i];
	}
}

/**
 * @brief Identical test from subject
 */
void	subjectTest() {
	std::cout << BG_WHITE BLACK "Subject test!" RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;
}

void	dogCopyTest() {
	std::cout << BG_WHITE BLACK "Subject test!" RESET << std::endl;

}
