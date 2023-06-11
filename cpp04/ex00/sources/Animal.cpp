/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:39:10 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 11:19:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Animal::Animal(void) :
	_type("undefined") {
	std::cout << CYAN "Animal - No Param Constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
Animal::Animal(Animal const & src) {
	std::cout << CYAN "Animal - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Default constructor with one param
 * @param type of animal
 */
Animal::Animal(std::string const & type) :
	_type(type) {
	std::cout << CYAN "Animal - Type animal Constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
Animal::~Animal(void) {
	std::cout << BRIGHT_RED "Animal - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Animal & Animal::operator=(Animal const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Animal - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Get Type of animal
 * @return std::string
 */
std::string Animal::getType(void) const {
	return (this->_type);
}

/**
 * @brief Member Function - MakeSound
 */
void	Animal::makeSound(void) const {
	std::cout << YELLOW << this->_type << ": No one knows this sound!" RESET << std::endl;
	return ;
}
