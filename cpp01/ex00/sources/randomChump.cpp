/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:39:11 by rlins             #+#    #+#             */
/*   Updated: 2023/05/03 07:30:21 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

/**
 * @brief It creates a zombie, name it, and the zombie announces itself.
 * @param name
 */
void	randomChump(std::string name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
	return ;
}
