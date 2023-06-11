/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:40:22 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 15:24:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Animal.hpp>
#include <Color.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

void	BaseClass();
void	dogByDerivedDogClass();
void	dogByBaseClass();
void	catByDerivedCatClass();
void	catByBaseClass();
void	subjectTest();
void 	wrongTest();
void	wrongSubjectTest();

int	main(void) {
	// // Bae class test
	// BaseClass();

	// // Dog tests
	// dogByDerivedDogClass();
	// dogByBaseClass();

	// // Cat tests
	// catByDerivedCatClass();
	// catByBaseClass();

	// // Wrong Test
	// wrongTest();

	// // Wrong Subject
	// wrongSubjectTest();

	// Subject tests
	subjectTest();

	return (0);
}

/**
 * @brief Tests with base class
 *
 */
void	BaseClass() {
	std::cout << BG_WHITE BLACK "Animal - Base class tests" RESET << std::endl;
	Animal *animal = new Animal();
	std::cout << GREEN "Animal type: " << animal->getType() << RESET << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;
}

/**
 * @brief Dog instantiate class, but by Dog class /Derived class
 *
 */
void dogByDerivedDogClass() {
	std::cout << BG_WHITE BLACK "Dog by derived Dog class" RESET << std::endl;
	Dog *dog = new Dog();
	std::cout << GREEN << "Dog type: " << dog->getType() << RESET << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;
}

/**
 * @brief Dog instantiate class,but by base class
 */
void dogByBaseClass() {
	std::cout << BG_WHITE BLACK "Dog by Animal base class" RESET << std::endl;
	Animal *dog = new Dog();
	std::cout << GREEN << "Animal type: " << dog->getType() << RESET << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;
}

/**
 * @brief Cat instantiate class, but by Cat class /Derived class
 *
 */
void catByDerivedCatClass() {
	std::cout << BG_WHITE BLACK "Cat by derived Cat class" RESET << std::endl;
	Cat *cat = new Cat();
	std::cout << GREEN << "Cat type: " << cat->getType() << RESET << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << std::endl;
}

/**
 * @brief Cat instantiate class,but by base class
 */
void catByBaseClass() {
	std::cout << BG_WHITE BLACK "Cat by Animal base class" RESET << std::endl;
	Animal *cat = new Cat();
	std::cout << GREEN << "Animal type: " << cat->getType() << RESET << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << std::endl;
}

/**
 * @brief Identical test from subject
 */
void	subjectTest() {
	std::cout << BG_WHITE BLACK "Subject test!" RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	std::cout << std::endl;
}

/**
 * @brief Test from subject - Wrong call
 */
void	wrongSubjectTest() {
	std::cout << BG_WHITE BLACK "[Wrong] Subject test!" RESET << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	std::cout << std::endl;
}

void 	wrongTest() {
	{
		std::cout << BG_WHITE BLACK "Wrong Animal" RESET << std::endl;
		const WrongAnimal *	animal = new WrongAnimal();
		std::cout << "WrongAnimal type: " << animal->getType() << std::endl;
		animal->makeSound();
		delete animal;
		std::cout << std::endl;
	}
	{
		std::cout << BG_WHITE BLACK "Wrong Cat By Wrong Cat Class" RESET << std::endl;
		const WrongCat *	cat = new WrongCat();
		std::cout << "WrongCat type: " << cat->getType() << std::endl;
		cat->makeSound();
		delete cat;
		std::cout << std::endl;
	}
	{
		std::cout << BG_WHITE BLACK "WrongCat By WrongAnimal Class" RESET << std::endl;
		const WrongAnimal * cat = new WrongCat();
		std::cout << "WrongAnimal type: " << cat->getType() << std::endl;
		cat->makeSound();
		delete cat;
		std::cout << std::endl;
	}
}
