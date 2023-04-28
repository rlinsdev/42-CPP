/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:06:17 by rlins             #+#    #+#             */
/*   Updated: 2023/04/28 14:13:14 by rlins            ###   ########.fr       */
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
void	PhoneBook::menu(bool firstTime) {
	std::cout << std::endl << std::endl;

	std::cout << "|------------------------------------------|" << std::endl;
	if (firstTime == true) {
		std::cout << "|-- Welcome to Crappy Awesome PhoneBook  --|" << std::endl;
	}
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
		std::cout <<  "Invalid input. Mini length not reached (" << minLeng << ")." << std::endl;
		return (false);
	}
	for (int i = 0; i < (int)input.length(); i++) {
		if (allowedChar.find_first_of(input[i]) == std::string::npos) {
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
	if (justNumber == true) {
		return (validInput(input, "0123456789", 3));
	} else {
		return (validInput(input, "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", 3));
	}
}

/**
 * @brief Recursive call to validate the input - FirstName input
 */
void	PhoneBook::handleFirstName(void) {
	std::string input;
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == false) {
		handleFirstName();
	} else {
		this->_contactList[this->_index].setFirstName(input);
	}
}

/**
 * @brief Recursive call to validate the input - LastName
 */
void	PhoneBook::handleLastName(void) {
	std::string input;
	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == false) {
		handleLastName();
	} else {
		this->_contactList[this->_index].setLastName(input);
	}
}

/**
 * @brief Recursive call to validate the input - Nick Name
 */
void	PhoneBook::handleNickName(void) {
	std::string input;
	std::cout << "Nick Name: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == false) {
		handleNickName();
	} else {
		this->_contactList[this->_index].setNickName(input);
	}
}

/**
 * @brief Recursive call to validate the input - Phone number
 */
void	PhoneBook::handlePhoneNumber(void) {
	std::string input;
	std::cout << "Phone Number (Just number): ";
	std::getline(std::cin, input);
	if (isValidField(input, true) == false) {
		handlePhoneNumber();
	} else {
		this->_contactList[this->_index].setPhoneNumber(input);
	}
}

/**
 * @brief Recursive call to validate the input - Darkest Secret
 */
void	PhoneBook::handleDarkestSecret(void) {
	std::string input;
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	if (isValidField(input, false) == false) {
		handleDarkestSecret();
	} else {
		this->_contactList[this->_index].setDarkestSecret(input);
	}
}

/**
 * @brief Add contact to phone book
 *
 */
void	PhoneBook::addContact(void) {
	indexHandler();
	std::cout << "|--------------- New Contact --------------|" << std::endl;

	handleFirstName();
	handleLastName();
	handleNickName();
	handlePhoneNumber();
	handleDarkestSecret();

	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|------------- Contact Saved!!! -----------|" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
}

/**
 * @brief Recursive call to validate input details - Detail Contact
 *
 */
void	PhoneBook::handleDetailContact(void) {
	std::string input;
	std::cout << "Put the index to show details info: " << std::endl;
	std::cout << "> ";
	std::getline(std::cin, input);
	if (isValidIndexDetail(input) == false) {
		handleDetailContact();
	} else {
		displaySingleContact(input);
	}
}

/**
 * @brief Responsible to Validate de index called by user
 * @param input
 * @return boolean in validation
 */
bool	PhoneBook::isValidIndexDetail(std::string input) {
	int	index = input[0] - '0';
	if ((index > 8 || index < 0) || this->_contactList[index].hasValue() == false) {
		std::cout << "Invalid index to get detail." << std::endl;
		return (false);
	} else {
		return (true);
	}
}

/**
 * @brief Search Contact
 */
void	PhoneBook::searchContact(void) {
	if (this->_index == -1) {
		std::cout << "Sorry... PhoneBook is empty." << std::endl;
		return ;
	}
	this->displayAllContact();
	handleDetailContact();
}

/**
 * @brief Show Header of all contacts
 */
void	PhoneBook::headerContacts(void) {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

/**
 * @brief Display a single contact
 * @param input
 */
void	PhoneBook::displaySingleContact(std::string input) {
	std::cout << "|--------------- User Detail --------------|" << std::endl;
	if (input.length() == 1 && std::isdigit(input[0])) {
		int	index = input[0] - '0';

		std::cout << "|First Name\t: " << this->_contactList[index].getFirstName() << std::endl;
		std::cout << "|Last Name\t: " << this->_contactList[index].getLastName() << std::endl;
		std::cout << "|Nick Name\t: " << this->_contactList[index].getNickName() << std::endl;
		std::cout << "|Phone Number\t: " << this->_contactList[index].getPhoneNumber() << std::endl;
		std::cout << "|Darkest Secret\t: " << this->_contactList[index].getDarkestSecret() << std::endl;
		std::cout << "+------------------------------------------+";
	} else {
		std::cout << "Invalid input. Not a digit or out of index size." << std::endl;
	}
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
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

/**
 * @brief Will increment the index of contacts.
 * Subject: "If the user tries to add a 9th contact, replace the oldest one by the new one".
 * Will handle  % 8 to replace the oldest
 */
void	PhoneBook::indexHandler(void) {
	this->_index++;
	this->_index = this->_index % 8;
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
