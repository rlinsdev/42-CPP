/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:06:17 by rlins             #+#    #+#             */
/*   Updated: 2023/04/24 12:29:00 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream> 	// std::cout

/**
 * @brief Class Constructor. When instantiate the class, this will be called.
 */
PhoneBook::PhoneBook()
{
}

/**
 * @brief Destroy the Phone Book. Free all objects when finished to use this
 * object
 */
PhoneBook::~PhoneBook()
{
}

void	PhoneBook::menu()
{
	std::cout << std::endl << std::endl;

	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|-------- Welcome to PhoneBook(42) --------|" << std::endl;
	std::cout << "|----------- Choose one option: -----------|" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|        (1) ADD - Add Contact to list     |" << std::endl;
	std::cout << "|        (2) SEARCH - Display Contacts     |" << std::endl;
	std::cout << "|        (3) EXIT - Quit program           |" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
}
