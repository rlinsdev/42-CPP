/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:26:47 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 09:34:03 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type) {
	return ;
}

Weapon::~Weapon() {
	return ;
}

/**
 * @brief Getter. Return the ref to change the value in getType
 * @return _type
 */
std::string const	&Weapon::getType(void) const {
	return(this->_type);
}

/**
 * @brief Setter.
 * @param type
 */
void	Weapon::setType(std::string const type) {
	this->_type = type;
	return ;
}
