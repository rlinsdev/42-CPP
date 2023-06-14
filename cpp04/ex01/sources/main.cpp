/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:40:22 by rlins             #+#    #+#             */
/*   Updated: 2023/06/14 08:05:47 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Animal.hpp>
#include <Color.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

void	subjectTest();
void	kennelTest(int nbAnimals);
void	catCopyTest();

int	main(void) {

	// Subject tests
	subjectTest();

	// Kennel test - Array of Animals
	kennelTest(5);

	// Cat Copy
	catCopyTest();

	std::cout << std::endl << BG_WHITE BLACK "End of tests!" RESET << std::endl;

	return (0);
}

/**
 * @brief Building a Kennel. Instance the class Animal and generate
 * Cats and dogs
 * @param nbAnimals
 */
void	kennelTest(int nbAnimals) {

	std::cout << std::endl << BG_WHITE BLACK "Kennel test! Let's make some animals! (Cats and dogs)" RESET << std::endl;

	Animal *arrAnimals[nbAnimals + 1]; // TODO: ? mais 1??
	arrAnimals[nbAnimals] = NULL; // TODO: Precisa?

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
	std::cout << std::endl << BG_WHITE BLACK "Subject test!" RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	delete j;
	delete i;
}

/**
 * @brief Copy tes animals
 */
void	catCopyTest() {
	std::cout << std::endl << BG_WHITE BLACK "Cat Copy test!" RESET << std::endl;

	Cat *catGray = new Cat();

	std::cout << ITAL << PURPLE << "\tCats thinking.... Getting some ideas..." << RESET << std::endl;
	catGray->getBrain()->setIdea(0, "Hi Human! You belongs to me!");
	catGray->getBrain()->setIdea(1, "Human, what are you doing in my house?!");

	std::cout << "Gray Cat idea (0): \"" << catGray->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Gray Cat idea (1): \"" << catGray->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << GREEN << "Creating a copy of **Gray Cat**: " << RESET << std::endl;
	Cat * catYellow = new Cat(*catGray);

	std::cout << ITAL << PURPLE << "\tYellow/Copy Cat should have the same ideas: " << RESET << std::endl;
	std::cout << "Yellow/Copy Cat idea 0: \"" << catYellow->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Yellow/Copy Cat idea 1: \"" << catYellow->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << ITAL << PURPLE << "\tGray Cat Changing and putting new ideas: " << RESET << std::endl;
	catGray->getBrain()->setIdea(0, "Here is Gray! Human, where is my toy??");
	catGray->getBrain()->setIdea(1, "Here is Gray! Human, don't bore me...");

	std::cout << "Gray Cat idea (0): \"" << catGray->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Gray Cat idea (1): \"" << catGray->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << ITAL << PURPLE << "\tYellow/Copy Cat should keep the same ideas as before: " << RESET << std::endl;
	std::cout << "Yellow/Copy Cat idea 0: \"" << catYellow->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Yellow/Copy Cat idea 1: \"" << catYellow->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << GREEN << "Free Both cats: " << RESET << std::endl;
	delete catGray;
	delete catYellow;
}
