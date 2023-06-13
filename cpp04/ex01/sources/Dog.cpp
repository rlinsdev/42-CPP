/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 07:26:49 by rlins             #+#    #+#             */
/*   Updated: 2023/06/13 09:01:56 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Dog::Dog(void) : Animal("Dog"), brain(new Brain()) {
	std::cout << CYAN "Dog constructor Called" RESET << std::endl;
	this->_type = "Dog";
	return ;
}

/**
 * @brief Copy constructor
 */
Dog::Dog(Dog const & src) : Animal(src._type), brain(NULL) {
	std::cout << CYAN "Dog - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Dog::~Dog(void) {
	std::cout << BRIGHT_RED "Dog - Destructor called." RESET << std::endl;
	delete this->brain;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Dog & Dog::operator=(Dog const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	this->brain = new Brain(*src.brain);
	std::cout << "Dog - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Member function - Make Sound
 */
void	Dog::makeSound(void) const {
	std::cout << YELLOW << this->_type << ":  Au Au, Arf! Arf!" RESET << std::endl;
	return ;
}

/**
 * @brief Get Brain
 * @return Brain*
 */
Brain *Dog::getBrain(void) const {
	return (this->brain);
}
