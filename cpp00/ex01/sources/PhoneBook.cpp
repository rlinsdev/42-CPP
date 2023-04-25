/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:06:17 by rlins             #+#    #+#             */
/*   Updated: 2023/04/25 12:05:31 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream> 	// std::cout
#include <iomanip>		// setW

/**
 * @brief Class Constructor. When instantiate the class, this will be called.
 */
PhoneBook::PhoneBook() : _index(-1) {
}

/**
 * @brief Destroy the Phone Book. Free all objects when finished to use this
 * object
 */
PhoneBook::~PhoneBook() {
}

/**
 * @brief Welcome message
 */
void	PhoneBook::menu() {
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
void	PhoneBook::farewell() {
	std::cout << std::endl << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|-------- See you later, Alligator --------|" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl << std::endl;
}

void	PhoneBook::addContact(void) {
	indexHandler();
	std::cout << "|--------------- New Contact --------------|" << std::endl;

	std::string input;
	// TODO: Add o restante das variáveixs
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	this->_contactList[this->_index].setFirstName(input);

	std::cout << "Contact Saved!" << std::endl;
}

void	PhoneBook::searchContact(void) {
	if (this->_index == -1) {
		std::cout << "PhoneBook is empty." << std::endl;
		return ;
	}
	this->displayAllContact();
	std::string input;
	std::cout << "Put the index to show details info: " << std::endl;
	std::getline(std::cin, input);
	// Isso aqui já está sendo tratado ali em baixo, certo?
	// if (input.empty() || this->_contactList[input].hasValue() == false ) { // TODO: Testar se este has value vai dar certo mesmo (Passar um index maior aqui)
	// 	std::cout << "Invalid index." << std::endl;
	// 	return ;
	// }
	displaySingleContact(input); // TODO:IsDigit aqui????
}

void	PhoneBook::headerContacts(void) {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	PhoneBook::displaySingleContact(std::string input) {
	headerContacts();

	if (input.length() == 1 && std::isdigit(input[0])) {
		int	index = input[0] - '0';

		std::cout << "First Name: " << this->_contactList[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_contactList[index].getLastName() << std::endl;
		std::cout << "Nick Name: " << this->_contactList[index].getNickName() << std::endl;
		std::cout << "Phone Number: " << this->_contactList[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->_contactList[index].getDarkestSecret() << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
	std::cout << "Invalid index" << std::endl;
}

/**
 * @brief Will display all contacts. Jus 4 columns and truncate at 10
 */
void	PhoneBook::displayAllContact(void) {
	headerContacts();
	for (int i = 0; i < 8; i++) {
		if (this->_contactList[i].hasValue() == false) {
			break;
		}
		std::cout << "|" << std::setw(10) << i << "|"; // TODO: setw
		truncate(this->_contactList[i].getFirstName());
		truncate(this->_contactList[i].getLastName());
		truncate(this->_contactList[i].getNickName());
	}
	std::cout << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

/**
 * @brief Will increment the index of contacts.
 * Subject: "If the user tries to add a 9th contact, replace the oldest one by the new one"
 */
void	PhoneBook::indexHandler(void) {
	this->_index++;
	if (this->_index == 7) {
		this->_index = 0;
	}
}

/**
 * @brief "Each column must be 10 characters wide. A pipe character (’|’) separates
 * them. The text must be right-aligned. If the text is longer than the column,
 * it must be truncated and the last displayable character must be replaced by a
 * dot (’.’)."
 * @param str String to be truncated
 */
void	PhoneBook::truncate(std::string str) {
	if (str.length() > 10) {
		str.resize(9);
		str +=  ".";
	}
	// TODO: Right aligned
	std::cout << std::setw(10) << str << "|"; // TODO 'setw'
	return ;
}
