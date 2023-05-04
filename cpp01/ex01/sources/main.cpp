/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:05:14 by rlins             #+#    #+#             */
/*   Updated: 2023/05/04 07:24:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits> 		// max
#include <string>
#include "Zombie.hpp"

#define MAX_HORDE 10000
#define MIN_HORDE -10000

Zombie *zombieHorde(int N, std::string name);

int	handleZombieNumber(bool firstCall) {
	int	nb = 0;

	if (firstCall == true) {
		std::cout << "Put the number of the Hordes of Zombies: ";
	}
	std::cout << std::endl << "> ";
	std::cin >> nb;
	while (!(std::cin >> nb) || (nb < MIN_HORDE || nb > MAX_HORDE)) {
		std::cout << "Invalid input. Try something between '"<< MIN_HORDE << "' and '" << MAX_HORDE <<"'";
		std::cout << std::endl << "> ";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (nb);
}

int	main(void) {
	int nb = handleZombieNumber(true);

	std::cout << nb;

	return (0);
}
