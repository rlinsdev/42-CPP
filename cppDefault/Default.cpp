/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Default.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:39:10 by rlins             #+#    #+#             */
/*   Updated: 2023/06/09 08:21:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Default.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Default::Default(void) :
	_type("undefined") {
	std::cout << "Default - No Param Constructor Called" << std::endl;
	return ;
}


/**
 * @brief Copy constructor
 */
Default::Default(Default const & src) {
	std::cout << "Default - Copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Default::~Default(void) {
	std::cout << "Default - Destructor called." << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Default & Default::operator=(Default const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Default - Copy assignment operator called." << std::endl;
	return (*this);
}

/******************************************************************************/
/*BEGIN - Getters and Setters*/
/******************************************************************************/
std::string Default::getType(void) const {
	return (this->_type);
}
// void ClapTrap::setAttackDamage(unsigned int value) {
// 	this->_attackDamage = value;
// }
/******************************************************************************/
/*END -Getters and Setters*/
/******************************************************************************/

