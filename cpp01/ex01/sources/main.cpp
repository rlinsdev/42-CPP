/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:05:14 by rlins             #+#    #+#             */
/*   Updated: 2023/05/09 08:31:49 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <string>
#include "Zombie.hpp"

#define MAX_HORDE 10000
#define MIN_HORDE 1

Zombie *zombieHorde(int N, std::string name);

/**
 * @brief Get the number of Horde. Limited by previous definition and handle
 * not numeric input
 * @return int
 */
int handleZombieNumber() {
	int	nb = 0;

	std::cout << "Put the number of the Hordes of Zombies: " << std::endl << "> ";
	while (!(std::cin >> nb) || (nb < MIN_HORDE || nb > MAX_HORDE)) {
		std::cout << "Invalid input. Try something between '"<< MIN_HORDE << "' and '" << MAX_HORDE <<"'";
		std::cout << std::endl << "> ";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (nb);
}

/**
 * @brief Get a Horde name
 * @return string
 */
std::string	getHordeName(void) {
	std::string	name;

	std::cin.ignore();
	std::cout << "Give a name to your squad:" << std::endl << "> ";
	std::getline(std::cin, name);
	return (name);
}

int	main(void) {
	int nb = handleZombieNumber();
	std::string squadName = getHordeName();
	std::cout << "---------------" << std::endl;
	std::cout << "Summoning the horde of " << nb << " zombies..." << std::endl;

	Zombie *allHorde = zombieHorde(nb, squadName);

	for (int i = 0; i < nb; i++) {
		allHorde[i].announce();
	}
	std::cout << "---------------" << std::endl;
	std::cout << "Return to your graves Zombies!" << std::endl;
	delete[] allHorde;
	return (0);
}
