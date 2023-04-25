/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:06:17 by rlins             #+#    #+#             */
/*   Updated: 2023/04/25 09:36:42 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream> 	// std::cout

/**
 * @brief Class Constructor. When instantiate the class, this will be called.
 */
PhoneBook::PhoneBook() : _index(-1)
{
}

/**
 * @brief Destroy the Phone Book. Free all objects when finished to use this
 * object
 */
PhoneBook::~PhoneBook()
{
}

/**
 * @brief Welcome message
 */
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

/**
 * @brief Farewell message
 */
void	PhoneBook::farewell()
{
	std::cout << std::endl << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|-------- See you later, Alligator --------|" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl << std::endl;
}

void	PhoneBook::addContact(void)
{
	indexHandler();
	std::cout << "|--------------- New Contact --------------|" << std::endl;

	std::string input;
	// TODO: Add o restante das variáveixs
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	this->_contactList[this->_index].setFirstName(input);

	std::cout << "Contact Saved!" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	if (this->_index == -1)
	{
		std::cout << "PhoneBook is empty."<<std::endl;
		return ;
	}

	// std::cout << "SearchContact called" << std::endl;
}

/**
 * @brief Will increment the index of contacts.
 * Subject: "If the user tries to add a 9th contact, replace the oldest one by the new one"
 */
void	PhoneBook::indexHandler(void)
{
	this->_index++;
	if (this->_index == 7) {
		this->_index = 0;
	}
}

void	PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str +=  ".";
	}
	std::cout << std::setw(10) << str << "|"; // TODO 'setw'
	return ;
}
