/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:40:07 by rlins             #+#    #+#             */
/*   Updated: 2023/07/14 07:57:55 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <Color.hpp>

/**
 * @brief Default Constructor
 */
PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Pardon Form",
					PresidentialPardonForm::gradeToSign,
					PresidentialPardonForm::gradeToExecute),
					_target("Unknown") {
		std::cout << CYAN "PresidentialPardonForm constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 * @param src
 */
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src),
			_target(src._target) {
	std::cout << CYAN "PresidentialPardonForm - Copy constructor called." RESET << std::endl;
	return ;
}

// PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
// 		:	AForm("Presidential Pardon Form",
// 					PresidentialPardonForm::gradeToSign,
// 					PresidentialPardonForm::gradeToExecute),
// 			_target(target)
// {
// 	std::cout << CYAN "PresidentialPardonForm attribute constructor called."
// 		RESET << std::endl;
// 	if (_target.empty())
// 		_target = "Unknown";
// 	return ;
// }

/**
 * @brief Destructor
 */
PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << YELLOW "PresidentialPardonForm - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	this->_target = src._target;
	return (*this);
}

/**
 * @brief Accessor - getTarget
 */
std::string const &	PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

/**
 * @brief Be Executed - Message from Subject
 */
void	PresidentialPardonForm::beExecuted(void) const {
	std::cout << GREEN << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}
