/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:20:26 by rlins             #+#    #+#             */
/*   Updated: 2023/05/05 08:23:44 by rlins            ###   ########.fr       */
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
void	HumanB::attack( void ) const {
	std::cout << "Attackk B";
}
