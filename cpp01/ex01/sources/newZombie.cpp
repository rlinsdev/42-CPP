/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:37:30 by rlins             #+#    #+#             */
/*   Updated: 2023/05/03 08:16:50 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

/**
 * @brief It creates a zombie, name it, and return it so you can use it outside
 * of the function scope
 * @param name
 * @return Zombie*
 */
Zombie *newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	return(zombie);
}
