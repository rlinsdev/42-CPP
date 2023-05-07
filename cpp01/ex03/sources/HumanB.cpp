/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:20:26 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 08:39:38 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const bName) : _name( bName ), _weapon( NULL ) {
}

HumanB::~HumanB() {
}

/**
 * @brief Attack method
 */
void	HumanB::attack(void) const {
	std::cout << this->_name << " attack with their ";
	if (this->_weapon != NULL && this->_weapon->getType() != "") {
		std::cout << this->_weapon->getType() << ".";
 	} else {
		std::cout << "fists!";
	}
	std::cout << std::endl;
	return ;
}

/**
 * @brief
 * @param aWeapon
 */
void	HumanB::setWeapon(Weapon &aWeapon) {
	if (aWeapon.getType().empty()) {
		this->_weapon = NULL;
	} else {
		this->_weapon = &aWeapon;
	}
	return ;
}
