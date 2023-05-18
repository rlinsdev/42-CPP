/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:14:57 by rlins             #+#    #+#             */
/*   Updated: 2023/05/18 07:51:59 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Fixed::Fixed(void) : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}


/**
 * @brief Copy constructor
 */
Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Fixed & Fixed::operator=(Fixed const & src) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &src) {
		// TODO
	}
	return (*this);
}
