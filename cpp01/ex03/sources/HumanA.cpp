/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:17:15 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 09:36:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <iostream>

/**
 * @brief Constructor. Initialize name and weapon
 * @param aName Name of human
 * @param aWeapon Weapon to use. Must be by ref to change in call 'set type'
 */
HumanA::HumanA(std::string const aName, Weapon const &aWeapon)
	: _name(aName), _weapon(aWeapon) {
	return ;
}

/**
 * @brief Destructor
 */
HumanA::~HumanA(void) {
	return ;
}

/**
 * @brief Attack method.
 * Verify if the weapon was update. If yes, passed it. Otherwise, passed hand...
 */
void	HumanA::attack(void) const {
	std::cout << this->_name << " attack with their ";
	if (this->_weapon.getType() == "") {
		std::cout << "hands!";
	} else {
		std::cout << this->_weapon.getType() << "!";
	}
	std::cout << std::endl;
	return ;
}
