/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:53:59 by rlins             #+#    #+#             */
/*   Updated: 2023/07/17 07:01:20 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include <Color.hpp>

/**
 * @brief Default Constructor
 */
Intern::Intern(void) {
	std::cout << CYAN "Intern constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 * @param src
 */
Intern::Intern(Intern const & src) {
	std::cout << CYAN "Intern - Copy constructor called." RESET << std::endl;
	(void)src;
	return ;
}

/**
 * @brief Destructor
 */
Intern::~Intern(void) {
	std::cout << YELLOW "Intern - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Intern &	Intern::operator=(Intern const & src) {
	(void)src;
	return (*this);
}

/**
 * @brief Create a Presidential Pardon Form object
 * @param target
 * @return AForm*
 */
static AForm *	createPresidentialPardonForm(std::string const & target) {
	return (new PresidentialPardonForm(target));
}

/**
 * @brief Create a Robotomy Request Form object
 * @param target
 * @return AForm*
 */
static AForm *	createRobotomyRequestForm(std::string const & target) {
	return (new RobotomyRequestForm(target));
}

/**
 * @brief Create a Shrubbery Creation Form object
 * @param target
 * @return AForm*
 */
static AForm *	createShrubberyCreationForm(std::string const & target) {
	return (new ShrubberyCreationForm(target));
}

/**
 * @brief TODO: Precisa?
 * @return const char*
 */
const char *	Intern::InvalidFormName::what(void) const throw() {
	return ("Invalid form name");
}

/**
 * @brief
 *
 * @param formName
 * @param target
 * @return AForm*
 */
AForm *	Intern::makeForm(std::string formName, std::string target)
{
	AForm *	formToCreate = NULL;
	static formList const	forms[3] = {
			{"shrubbery creation", createShrubberyCreationForm},
			{"robotomy request", createRobotomyRequestForm},
			{"presidential pardon", createPresidentialPardonForm}
		};

	for (int i = 0; i < 3; i++) {
		if (forms[i].formName == formName) {
			formToCreate = forms[i].function(target);
			std::cout << GREEN "Intern created " << *formToCreate << RESET << std::endl;
			return (formToCreate);
		}
	}
	std::cout << RED "Intern could not create form named: " << formName << RESET;
	throw Intern::InvalidFormName();
}

// /**
//  * @brief Accessor - getTarget
//  */
// std::string const &	Intern::getTarget(void) const {
// 	return (this->_target);
// }

// /**
//  * @brief Be Executed - Message from Subject
//  */
// void	Intern::beExecuted(void) const {
// 	std::cout << GREEN << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
// 	return ;
// }
