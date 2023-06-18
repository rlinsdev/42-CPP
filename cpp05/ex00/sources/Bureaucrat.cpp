/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:27:10 by rlins             #+#    #+#             */
/*   Updated: 2023/06/18 10:30:29 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Bureaucrat::Bureaucrat(void) {
	std::cout << CYAN "Bureaucrat constructor Called" RESET << std::endl;
	this->_type = "Bureaucrat";
	return ;
}

/**
 * @brief Copy constructor
 */
Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	std::cout << CYAN "Bureaucrat - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Bureaucrat::~Bureaucrat(void) {
	std::cout << BRIGHT_RED "Bureaucrat - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Bureaucrat - Copy assignment operator called." << std::endl;
	return (*this);
}

// /**
//  * @brief Member function - Make Sound
//  */
// void	Bureaucrat::makeSound(void) const {
// 	std::cout << YELLOW << this->_type << ": Meooow meoooowwwwwwww" RESET << std::endl;
// 	return ;
// }
