/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:44:08 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 11:54:02 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Cat::Cat(void) : Animal("Cat") {
	std::cout << CYAN "Cat constructor Called" RESET << std::endl;
	this->_type = "Cat";
	return ;
}

/**
 * @brief Copy constructor
 */
Cat::Cat(Cat const & src) : Animal(src._type) {
	std::cout << CYAN "Cat - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Cat::~Cat(void) {
	std::cout << BRIGHT_RED "Cat - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Cat & Cat::operator=(Cat const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Cat - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Member function - Make Sound
 */
void	Cat::makeSound(void) const {
	std::cout << YELLOW << this->_type << ": Meooow meoooowwwwwwww" RESET << std::endl;
	return ;
}
