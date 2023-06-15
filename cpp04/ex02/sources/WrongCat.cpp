/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:34:45 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 15:04:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
WrongCat::WrongCat(void): WrongAnimal("Cat") {
	std::cout << CYAN "WrongCat constructor Called" RESET << std::endl;
	this->_type = "WrongCat";
	return ;
}

/**
 * @brief Copy constructor
 */
WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src._type) {
	std::cout << CYAN "WrongCat - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
WrongCat::~WrongCat(void) {
	std::cout << BRIGHT_RED "WrongCat - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
WrongCat & WrongCat::operator=(WrongCat const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "WrongCat - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Member function - Make Sound
 */
void	WrongCat::makeSound(void) const {
	std::cout << YELLOW << this->_type << ": Meooow meoooowwwwwwww" RESET << std::endl;
	return ;
}
