/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:17:02 by rlins             #+#    #+#             */
/*   Updated: 2023/06/08 09:32:38 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor. Inheritance from ClapTrap
 */
ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_hitPoints = c_scav_hitPoints;
	this->_energyPoints = c_scav_energyPoints;
	this->_attackDamage = c_scav_attackDamagePoints;

	std::cout << "Sc4v-tp with no name was constructed" << std::endl;
	return ;
}

/**
 * @brief Construct by name. Inheritance from ClapTrap
 * @param name
 */
ScavTrap::ScavTrap(std::string & name) : ClapTrap(name) {
	this->_hitPoints = c_scav_hitPoints;
	this->_energyPoints = c_scav_energyPoints;
	this->_attackDamage = c_scav_attackDamagePoints;

	std::cout << "Sc4v-tp named **" << name << " was constructed" << std::endl;
	return ;
}

/**
 * @brief Copy constructor. Inheritance from ClapTrap
 * @param src
 */
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap() {
	std::cout << "Sc4v-tp copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
ScavTrap::~ScavTrap(void) {
	std::cout << "Sc4v-tp **" << this->_name << " destroyed" << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	return (*this);
}

/**
 * @brief Attack from ScavTrap.
 * attack() will print different messages.
 * After all, ClapTraps are aware of their individuality.
 * @param target
 */
void	ScavTrap::attack(std::string & target) {
	if (this->_hitPoints <= 0) {
		std::cout << "No more Hit Points to attack..." << std::endl;
		return ;
	}

	if (this->_energyPoints <= 0) {
		std::cout << "No more energy to attack..." << std::endl;
		return ;
	}

	this->_energyPoints--;
	std::cout << "Sc4v-tp **" << this->_name << " attacks **" << target
		<< ", causing " << this->_attackDamage << " points of damage! Energy Remain: " << this->_energyPoints << "." << std::endl;
}

void	ScavTrap::guardGate(void) {
	if (this->_hitPoints == 0)
		std::cout << this->_name
			<< "can't guard the gate in its broken state." << std::endl;
	else
		std::cout  << this->_name
			<< " switches to Gate guarding mode."   << std::endl;
	return ;
}
