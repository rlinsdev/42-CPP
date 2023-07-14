/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:12:52 by rlins             #+#    #+#             */
/*   Updated: 2023/07/14 08:20:00 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <Color.hpp>
#include <cstdlib>

/**
 * @brief Default Constructor
 */
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Presidential Request Form",
					RobotomyRequestForm::gradeToSign,
					RobotomyRequestForm::gradeToExecute),
					_target("Unknown") {
		std::cout << CYAN "RobotomyRequestForm constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 * @param src
 */
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src),
			_target(src._target) {
	std::cout << CYAN "RobotomyRequestForm - Copy constructor called." RESET << std::endl;
	return ;
}

// RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
// 		:	AForm("Presidential Pardon Form",
// 					RobotomyRequestForm::gradeToSign,
// 					RobotomyRequestForm::gradeToExecute),
// 			_target(target)
// {
// 	std::cout << CYAN "RobotomyRequestForm attribute constructor called."
// 		RESET << std::endl;
// 	if (_target.empty())
// 		_target = "Unknown";
// 	return ;
// }

/**
 * @brief Destructor
 */
RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << YELLOW "RobotomyRequestForm - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	this->_target = src._target;
	return (*this);
}

/**
 * @brief Accessor - getTarget
 */
std::string const &	RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

/**
 * @brief Be Executed - Message from Subject.
 * Then, informs that <target> has been robotomized
 * successfully 50% of the time. Otherwise, informs that the robotomy failed.
 */
void	RobotomyRequestForm::beExecuted(void) const {
	if (std::rand() % 2) {
		std::cout << GREEN << this->_target << " successfully robotomized!" << std::endl;
	} else {
		std::cout << RED << this->_target << " robotomy failed!" << std::endl;
	}
	return ;
}
