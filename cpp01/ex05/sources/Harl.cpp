/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 06:56:03 by rlins             #+#    #+#             */
/*   Updated: 2023/05/08 08:09:50 by rlins            ###   ########.fr       */
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
 * @brief Debug Level
 */
void	Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
	return ;
}

/**
 * @brief Info Level
 */
void	Harl::info(void) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

/**
 * @brief Error Level
 */
void	Harl::error(void) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

/**
 * @brief Warning level
 */
void	Harl::warning(void) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years whereas you started working here since last month." << std::endl;
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
