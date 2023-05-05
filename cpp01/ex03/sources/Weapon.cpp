/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:26:47 by rlins             #+#    #+#             */
/*   Updated: 2023/05/05 08:25:48 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type( type ) {
}

Weapon::~Weapon() {
}

/**
 * @brief Getter
 * @return _type
 */
std::string const	Weapon::getType(void) const {
	return(this->_type);
}

void	Weapon::setType(std::string const type) {
	this->_type = type;
	return ;
}
