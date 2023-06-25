/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:27:10 by rlins             #+#    #+#             */
/*   Updated: 2023/06/21 08:14:57 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Bureaucrat::Bureaucrat(void) : _name("Jimmy Page"), _grade(Bureaucrat::c_min_grade) {
	std::cout << CYAN "Bureaucrat constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Construct. Name and grade params
 */
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < c_max_grade) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > c_min_grade) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade = grade;
		std::cout << CYAN "Bureaucrat name/grade constructor called. " << this->_name << " is born!" RESET << std::endl;
	}
}

/**
 * @brief Copy constructor
 */
Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {
	std::cout << CYAN "Bureaucrat - Copy constructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
Bureaucrat::~Bureaucrat(void) {
	std::cout << YELLOW "Bureaucrat - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
	if (this != &src) {
		this->_grade = src.getGrade();
	}
	std::cout << "Bureaucrat - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Accessors - Get Name of a Bureaucrat
 * @return
 */
std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

/**
 * @brief Accessors - Get Grade of a Bureaucrat
 * @return int
 */
int	Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

/**
 * @brief Increment Grade - Will decrement the grade. Increment will decrease -1
 * @return int
 */
int Bureaucrat::incrementGrade(void) {
	if (this->_grade - 1  < c_max_grade) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade --;
		std::cout << GREEN << "Bureaucrat " << this->_name << " was demoted to grade "
			<< this->_grade << "." << RESET << std::endl;
	}
	return (this->_grade);
}

/**
 * @brief Decrement Grade - Will decrement the grade. Decrement will increase +1
 * @return int
 */
int Bureaucrat::decrementGrade(void) {
	if (this->_grade + 1  > c_min_grade) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade ++;
		std::cout << GREEN << "Bureaucrat " << this->_name << " was promoted to grade "
			<< this->_grade << "." << RESET << std::endl;
	}
	return (this->_grade);
}

/**
 * @brief GradeTooHighException -
 * @return string exception
 */
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (RED "Grade too high!" RESET);
}

/**
 * @brief GradeTooLowException
 * @return String to exception
 */
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (RED "Grade too low!" RESET);
}

/**
 * @brief Overload of the insertion («) operator
 * @param os OutPutStream
 * @param objBure
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& os, Bureaucrat const& objBure) {
	os << BLUE << objBure.getName() << RESET << ". Bureaucrat Grade: "
	<< BLUE << objBure.getGrade() << RESET << "." << std::endl;
	return (os);
}

