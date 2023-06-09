/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:39:10 by rlins             #+#    #+#             */
/*   Updated: 2023/06/09 08:40:19 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Animal::Animal(void) :
	_type("undefined") {
	std::cout << "Animal - No Param Constructor Called" << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
Animal::Animal(Animal const & src) {
	std::cout << "Animal - Copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Default constructor with one param
 * @param type of animal
 */
Animal::Animal(std::string type) :
	_type(type) {
	std::cout << "Animal - Type animal Constructor Called" << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
Animal::~Animal(void) {
	std::cout << "Animal - Destructor called." << std::endl;
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

/******************************************************************************/
/*BEGIN - Getters and Setters*/
/******************************************************************************/
std::string Animal::getType(void) const {
	return (this->_type);
}

/******************************************************************************/
/*END -Getters and Setters*/
/******************************************************************************/
void	Animal::makeSound(void) {
	std::cout << this->_type << ": No one knows this sound!" << std::endl;
	return ;
}
