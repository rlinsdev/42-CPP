/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/04 07:51:52 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
ClapTrap::ClapTrap(void) {
	// std::cout << "Default constructor called" << std::endl;
	return ;
}


/**
 * @brief Copy constructor
 */
ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &src) {
		// this->_raw = src.getRawBits();
	}
	return (*this);
}

// /**
//  * @brief Getter
//  * @return int
//  */
// int		Fixed::getRawBits(void) const {
// 	std::cout << "getRawBits member function called." << std::endl;
// 	return (this->_raw);
// }

// /**
//  * @brief Setter
//  */
// void	Fixed::setRawBits(int const _raw) {
// 	std::cout << "SetRawBits called." << std::endl;
// 	this->_raw = _raw;
// 	return ;
// }
