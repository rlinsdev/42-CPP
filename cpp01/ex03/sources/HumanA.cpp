/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:17:15 by rlins             #+#    #+#             */
/*   Updated: 2023/05/05 08:21:31 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <iostream>

HumanA::HumanA(std::string const aName, Weapon const aWeapon)
	: _name( aName ),	_weapon( aWeapon ) {
}

HumanA::~HumanA() {
}

/**
 * @brief Attack method
 */
void	HumanA::attack( void ) const {
	std::cout << "Attackk A";
}
