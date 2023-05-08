/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 06:56:03 by rlins             #+#    #+#             */
/*   Updated: 2023/05/08 07:58:16 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

/**
 * @brief Constructor
 */
Harl::Harl(void) {
	return ;
}

/**
 * @brief Destructor
 */
Harl::~Harl(void) {
	return ;
}

/**
 * @brief Debug info
 */
void	Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) {
	return ;
}

void	Harl::error(void) {
	return ;
}

void	Harl::warning(void) {
	return ;
}


/**
 * @brief
 *
 * @param level
 */
void	Harl::complain(std::string level) {

	std::string arrChoice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; i++) {
		if (level == arrChoice[i]) {
			(this->*funcs[i])();
			return ;
		}
	}
	std::cerr << "Invalid choice. try again." << std::endl;
}
