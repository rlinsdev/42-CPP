/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/04 10:01:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
ClapTrap::ClapTrap(void) :
	_name("unnamed"),
	_hitPoints(ClapTrap::c_hitPoints),
	_energyPoints(ClapTrap::c_energyPoints),
	_attackDamage(ClapTrap::c_attackDamagePoints) {
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

/**
 * @brief Default constructor - Name by param
 * @param name
 */
ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitPoints(ClapTrap::c_hitPoints),
	_energyPoints(ClapTrap::c_energyPoints),
	_attackDamage(ClapTrap::c_attackDamagePoints) {
	std::cout << "Cl4p-tp named " << name << " was constructed" << std::endl;
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
	std::cout << "Cl4p-tp " << this->_name << " destroyed" << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	if (this != &src) {
		this->_name = src.getName();

	}
	return (*this);
}

/******************************************************************************/
/*BEGIN - Getters*/
/******************************************************************************/
std::string ClapTrap::getName(void) const {
	return (this->_name);
}
unsigned int ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}
/******************************************************************************/
/*END -MGetters*/
/******************************************************************************/

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
