/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:40:22 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 11:38:55 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <color.hpp>
#include <Dog.hpp>
#include <iostream>

void	BaseClass();
void	dogByDerivedDogClass();
void	dogByBaseClass();

int	main(void) {

	BaseClass();
	dogByDerivedDogClass();
	dogByBaseClass();

	return (0);
}

void	BaseClass() {
	std::cout << std::endl << BG_WHITE WHITE "Animal - Base class tests" RESET << std::endl;
	Animal *animal = new Animal();
	std::cout << GREEN "Animal type: " << animal->getType() << RESET << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;
}

void dogByDerivedDogClass() {
	std::cout << std::endl << BG_WHITE WHITE "Dog by derived Dog class" RESET << std::endl;
	Dog *dog = new Dog();
	std::cout << GREEN << "Dog type: " << dog->getType() << RESET << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;
}

void dogByBaseClass() {
	std::cout << std::endl << BG_WHITE WHITE "Dog by Animal base class" RESET << std::endl;
	Animal *dog = new Dog();
	std::cout << GREEN << "Animal type: " << dog->getType() << RESET << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;
}
