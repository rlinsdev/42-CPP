/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:28:24 by rlins             #+#    #+#             */
/*   Updated: 2023/06/15 08:01:06 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
AAnimal::AAnimal(void) :
	_type("undefined") {
	std::cout << CYAN "AAnimal - No Param Constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
AAnimal::AAnimal(AAnimal const & src) {
	std::cout << CYAN "AAnimal - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Default constructor with one param
 * @param type of animal
 */
AAnimal::AAnimal(std::string const & type) :
	_type(type) {
	std::cout << CYAN "AAnimal - Type animal Constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
AAnimal::~AAnimal(void) {
	std::cout << BRIGHT_RED "AAnimal - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
AAnimal & AAnimal::operator=(AAnimal const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "AAnimal - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Get Type of animal
 * @return std::string
 */
std::string AAnimal::getType(void) const {
	return (this->_type);
}

/**
 * @brief Member Function - MakeSound
 */
void	AAnimal::makeSound(void) const {
	std::cout << YELLOW << this->_type << ": No one knows this sound!" RESET << std::endl;
	return ;
}
