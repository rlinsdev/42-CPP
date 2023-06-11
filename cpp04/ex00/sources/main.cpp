/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:40:22 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 11:58:02 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <color.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <iostream>

void	BaseClass();
void	dogByDerivedDogClass();
void	dogByBaseClass();
void	catByDerivedCatClass();
void	catByBaseClass();
void	subjectTest();

int	main(void) {
	// BaseClass();

	// // Dog tests
	// std::cout << std::endl;
	// dogByDerivedDogClass();
	// dogByBaseClass();

	// // Cat tests
	// std::cout << std::endl;
	// catByDerivedCatClass();
	// catByBaseClass();

	// Suject tests
	subjectTest();

	return (0);
}

/**
 * @brief Tests with base class
 *
 */
void	BaseClass() {
	std::cout << BG_WHITE WHITE "Animal - Base class tests" RESET << std::endl;
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
	std::cout << BG_WHITE WHITE "Dog by derived Dog class" RESET << std::endl;
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
	std::cout << BG_WHITE WHITE "Dog by Animal base class" RESET << std::endl;
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
	std::cout << BG_WHITE WHITE "Cat by derived Cat class" RESET << std::endl;
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
	std::cout << BG_WHITE WHITE "Cat by Animal base class" RESET << std::endl;
	Animal *cat = new Cat();
	std::cout << GREEN << "Animal type: " << cat->getType() << RESET << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << std::endl;
}

void	subjectTest() {
	std::cout << BG_WHITE WHITE "Subject test!" RESET << std::endl;
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
