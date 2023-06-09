/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 07:26:49 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 15:05:08 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Dog::Dog(void) : Animal("Dog") {
	std::cout << CYAN "Dog constructor Called" RESET << std::endl;
	this->_type = "Dog";
	return ;
}

/**
 * @brief Copy constructor
 */
Dog::Dog(Dog const & src) : Animal(src._type) {
	std::cout << CYAN "Dog - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Dog::~Dog(void) {
	std::cout << BRIGHT_RED "Dog - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Dog & Dog::operator=(Dog const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
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
