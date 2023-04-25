/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:18:10 by rlins             #+#    #+#             */
/*   Updated: 2023/04/25 16:45:19 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 * @brief Construct a new Contact:: Contact object
 */
Contact::Contact() {
	return ;
}

/**
 * @brief Destructor of Contact object
 */
Contact::~Contact() {
	return ;
}

/**
 * @brief Getters of Contact class
 */

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}
std::string Contact::getLastName(void) const {
	return (this->_lastName);
}
std::string Contact::getNickName(void) const {
	return (this->_nickName);
}
std::string Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}

/**
 * @brief Setters of Contact class
 */
void Contact::setFirstName(const std::string firstName) {
	this->_firstName = firstName;
}
void Contact::setLastName(const std::string lastName) {
	this->_lastName = lastName;
}
void Contact::setNickName(const std::string  nickName) {
	this->_nickName = nickName;
}
void Contact::setPhoneNumber(const std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(const std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

/**
 * @brief Verify if all the local variables has value.
 * @return boolean - has or not value in all variables
 */
bool Contact::hasValue(void) {
	if (this->_firstName.empty() ||
		this->_lastName.empty() ||
		this->_nickName.empty() ||
		this->_phoneNumber.empty() ||
		this->_darkestSecret.empty()) {
		return (false);
	}
	return (true);
}
