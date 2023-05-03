/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:05:14 by rlins             #+#    #+#             */
/*   Updated: 2023/05/03 08:27:55 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	// Heap Allocation
	Zombie *firstZombie = newZombie("Zomb-1");
	firstZombie->announce();
	delete firstZombie;

	// Stack allocation
	randomChump("Zomb-2");
	return (0);
}
