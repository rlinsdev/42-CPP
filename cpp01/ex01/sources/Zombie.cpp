/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:33:06 by rlins             #+#    #+#             */
/*   Updated: 2023/05/04 08:17:26 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <string>
#include <iostream>

/**
 * @brief Constructor
 */
Zombie::Zombie(void) {
	std::cout << "A zombie respawn!" << std::endl;
	return ;
}

/**
 * @brief Construct a new Zombie: name by param
 * @param name
 */
Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "The zombie '" << this->getName() << "' respawn!" << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
Zombie::~Zombie(void) {
	std::cout << "No human found. I'll fall to sleep again!" << std::endl;
	return ;
}

/**
 * @brief Getter - Get Name
 * @return std::string
 */
std::string Zombie::getName(void) const {
	return (this->_name);
}

/**
 * @brief Setter - Set Name
 * @param name
 */
void	Zombie::setName(std::string const name) {
	this->_name = name;
	return ;
}

/**
 * @brief Zombie announce itself
 */
void	Zombie::announce(void) {
	std::cout << "Zombie in squad "<< this->getName() << " says: " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
