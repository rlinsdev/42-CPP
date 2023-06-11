/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:21:47 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 15:05:03 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
WrongAnimal::WrongAnimal(void) :
	_type("undefined") {
	std::cout << CYAN "WrongAnimal - No Param Constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << CYAN "WrongAnimal - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Default constructor with one param
 * @param type of animal
 */
WrongAnimal::WrongAnimal(std::string const & type) :
	_type(type) {
	std::cout << CYAN "WrongAnimal - Type animal Constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
WrongAnimal::~WrongAnimal(void) {
	std::cout << BRIGHT_RED "WrongAnimal - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "WrongAnimal - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Get Type of animal
 * @return std::string
 */
std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

/**
 * @brief Member Function - MakeSound
 */
void	WrongAnimal::makeSound(void) const {
	std::cout << YELLOW << this->_type << ": No one knows this sound!" RESET << std::endl;
	return ;
}
