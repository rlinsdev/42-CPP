/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/08 09:46:39 by rlins            ###   ########.fr       */
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
	_hitPoints(ClapTrap::c_clap_hitPoints),
	_energyPoints(ClapTrap::c_clap_energyPoints),
	_attackDamage(ClapTrap::c_clap_attackDamagePoints) {
	std::cout << "Cl4p-tp with no name was constructed" << std::endl;
	return ;
}

/**
 * @brief Default constructor - Name by param
 * @param name
 */
ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitPoints(ClapTrap::c_clap_hitPoints),
	_energyPoints(ClapTrap::c_clap_energyPoints),
	_attackDamage(ClapTrap::c_clap_attackDamagePoints) {
	std::cout << "Cl4p-tp named **" << name << " was constructed" << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Cl4p-tp copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
ClapTrap::~ClapTrap(void) {
	std::cout << "Cl4p-tp **" << this->_name << " destroyed" << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	return (*this);
}

/******************************************************************************/
/*BEGIN - Getters and Setters*/
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
void ClapTrap::setAttackDamage(unsigned int value) {
	this->_attackDamage = value;
}
/******************************************************************************/
/*END -Getters and Setters*/
/******************************************************************************/

/**
 * @brief When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
 * Attacking and repairing cost 1 energy point each.
 * Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
 * @param target
 */
void		ClapTrap::attack(std::string & target) {
	if (this->_hitPoints <= 0) {
		std::cout << "No more Hit Points to attack..." << std::endl;
		return ;
	}

	if (this->_energyPoints <= 0) {
		std::cout << "No more energy to attack..." << std::endl;
		return ;
	}

	this->_energyPoints--;
	std::cout << "Cl4p-tp **" << this->_name << " attacks **" << target
		<< ", causing " << this->_attackDamage << " points of damage! Energy Remain: " << this->_energyPoints << "." << std::endl;
}

/**
 * @brief Take damage will will loose hit points
 * @param amount
 */
void		ClapTrap::takeDamage(unsigned int amount) {
	if (amount <= 0) {
		std::cout << "Invalid Amount to Take Damage" << std::endl;
		return ;
	}

	if (this->_hitPoints <= 0) {
		std::cout << "No more Hit Points to take damage..." << std::endl;
		return ;
	}

	this->_hitPoints -= amount;
	std::cout << "*****" << this->_name << " takes " << amount << " damage... Heal remain: "
		<< this->_hitPoints << "." << std::endl;
}
/**
 * @brief When ClapTrap repairs itself, it gets <amount> hit points back
 * Attacking and repairing cost 1 energy point each.
 * Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
 * @param amount
 */
void	ClapTrap::beRepaired(unsigned int amount) {

	if (amount <= 0) {
		std::cout << "Invalid Amount to repair something..." << std::endl;
		return ;
	}

	if (this->_hitPoints <= 0) {
		std::cout << "******" << this->_name << " can't repaired... HitPoints Required..." << std::endl;
		return ;
	}

	if (this->_energyPoints <= 0) {
		std::cout << "******" << this->_name << " can't repaired... EnergyPoints Required..." << std::endl;
		return ;
	}

	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "******" << this->_name << " repairs " << amount << ", healing: "
		<< this->_hitPoints << "." << std::endl;
	return ;
}
