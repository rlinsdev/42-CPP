/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:06:17 by rlins             #+#    #+#             */
/*   Updated: 2023/04/26 13:39:13 by rlins            ###   ########.fr       */
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

/**
 * @brief Will handle the input, if it is valid or not. Validate char by char and the
 * min. length allowed
 * @param input String to validate
 * @param allowedChar String with allowed chars
 * @param minLeng Min length allowed
 * @return boolean - valid or invalid
 */
bool	PhoneBook::validInput(std::string input, const std::string allowedChar, long unsigned int minLeng) {
	if (input.length() < minLeng) {
		std::cout << "Invalid input in: " << input << ". Min length not reached" << std::endl;
	}
	for (int i = 0; i < (int)input.length(); i++) {
		if (allowedChar.find_first_of(input[i]) == std::string::npos) { // TODO
			std::cout << "Invalid input in: " << input << ". Special char not allowed: '" << input[i] << "'" << std::endl;
			return (false);
		}
	}
	return (true);
}

/**
 * @brief Will handle different types of inputs. Just number or number en char.
 * @param input Input to be validated
 * @param justNumber Handle just number or number and letter
 * @return boolean success or not
 */
bool	PhoneBook::isValidField(std::string input, bool justNumber) {
	// TODO: Verificar se é vazio também?
	if (justNumber == true) {
		return (validInput(input, "0123456789", 3));
	} else {
		return (validInput(input, "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", 3));
	}
}

void	PhoneBook::addContact(void) {
	indexHandler();
	std::cout << "|--------------- New Contact --------------|" << std::endl;

	std::string input;

	std::cout << "First Name: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == true) {
		this->_contactList[this->_index].setFirstName(input);
	} else {
		return ;
	}

	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == true) { // TODO: ValidField não 'validate'
		this->_contactList[this->_index].setLastName(input);
	} else {
		return ;
	}

	std::cout << "Nick Name: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == true) {
		this->_contactList[this->_index].setNickName(input);
	} else {
		return ;
	}

	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	if (isValidField(input, true) == true) {
		this->_contactList[this->_index].setPhoneNumber(input);
	} else {
		return ;
	}

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == true) {
		this->_contactList[this->_index].setDarkestSecret(input);
	} else {
		return ;
	}

	std::cout << "Contact Saved!" << std::endl;
}

void	PhoneBook::searchContact(void) {
	if (this->_index == -1) {
		std::cout << "Sorry... PhoneBook is empty." << std::endl;
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
		std::cout << "|" << std::setw(10) << i << "|";
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
	std::cout << std::setw(10) << str << "|";
	return ;
}
