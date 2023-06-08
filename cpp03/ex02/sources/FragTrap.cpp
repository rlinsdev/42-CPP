/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:56:31 by rlins             #+#    #+#             */
/*   Updated: 2023/06/08 11:51:22 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor. Inheritance from ClapTrap
 */
FragTrap::FragTrap(void) : ClapTrap() {
	this->_hitPoints = c_frag_hitPoints;
	this->_energyPoints = c_frag_energyPoints;
	this->_attackDamage = c_frag_attackDamagePoints;

	std::cout << "Frag-Trap with no name was constructed" << std::endl;
	return ;
}

/**
 * @brief Construct by name. Inheritance from ClapTrap
 * @param name
 */
FragTrap::FragTrap(std::string & name) : ClapTrap(name) {
	this->_hitPoints = c_frag_hitPoints;
	this->_energyPoints = c_frag_energyPoints;
	this->_attackDamage = c_frag_attackDamagePoints;

	std::cout << "Frag-Trap named **" << name << " was constructed" << std::endl;
	return ;
}

/**
 * @brief Copy constructor. Inheritance from ClapTrap
 * @param src
 */
FragTrap::FragTrap(FragTrap const & src) : ClapTrap() {
	std::cout << "Frag-Trap copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
FragTrap::~FragTrap(void) {
	std::cout << "Frag-Trap **" << this->_name << " destroyed" << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
FragTrap & FragTrap::operator=(FragTrap const & src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Let's High Five!!!!" << std::endl;
	return ;
}
