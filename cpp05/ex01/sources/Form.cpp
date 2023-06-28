/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:59:30 by rlins             #+#    #+#             */
/*   Updated: 2023/06/28 07:18:52 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <Color.hpp>
#include <iostream>

// /**
//  * @brief Default Constructor
//  */
Form::Form(void) : 	_name("Basic Form"),
				 	_isSigned(false),
					_gradeToSign(Bureaucrat::c_min_grade),
					_gradeToExecute(Bureaucrat::c_max_grade) {
	std::cout << CYAN "Form constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Construct a new Form:: Form object
 * @param name Name of Form
 * @param gradeToSign Must to be between 1 (max) to 150 (min)
 * @param gradeToExecute Must to be between 1 (max) to 150 (min)
 */
Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
					_name(name),
				 	_isSigned(false),
					_gradeToSign(gradeToSign),
					_gradeToExecute(gradeToExecute) {
	if (gradeToSign < Bureaucrat::c_max_grade || gradeToExecute < Bureaucrat::c_max_grade) {
		throw Form::GradeTooHighException();
	} else if (gradeToSign > Bureaucrat::c_min_grade || gradeToExecute > Bureaucrat::c_min_grade) {
		throw Form::GradeTooLowException();
	}
}

/**
 * @brief Copy constructor
 */
Form::Form(Form const & src) :
					_name(src._name),
					_isSigned(false),
					_gradeToSign(src._gradeToSign),
					_gradeToExecute(src._gradeToExecute) {
	std::cout << CYAN "Form - Copy constructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
Form::~Form(void) {
	std::cout << YELLOW "Form - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Form & Form::operator=(Form const & src) {
	if (this != &src) {
		this->_isSigned = src._isSigned;
	}
	std::cout << "Form - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Accessors - Get Name of a Form
 * @return
 */
std::string	Form::getName(void) const {
	return (this->_name);
}

/**
 * @brief Accessor - Get the info if Form is signed
 * @return boolean
 */
bool	Form::isSigned(void) const {
	return (this->_isSigned);
}

/**
 * @brief Accessors - Get Grade of a Form
 * @return int
 */
int	Form::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}

/**
 * @brief Accessors - Get Grade of a Form
 * @return int
 */
int	Form::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

/**
 * @brief Sign the Form.
 * "It changes the form status to signed if the bureaucrat’s grade is high enough
 * (higher or egal to the required one)"
 * @param bureaucrat
 */
void	Form::beSigned(Bureaucrat const & bureaucrat) {
	if (this->_isSigned) {
		throw (Form::AlreadySignedException());
	}
	if (bureaucrat.getGrade() > this->_gradeToSign) {
		throw (Form::GradeTooLowException());
	}
	this->_isSigned = true;
	return ;
}

/**
 * @brief GradeTooHighException -
 * @return string exception
 */
const char* Form::GradeTooHighException::what() const throw() {
	return (RED "Grade too high!" RESET);
}

/**
 * @brief GradeTooLowException
 * @return String to exception
 */
const char* Form::GradeTooLowException::what() const throw() {
	return (RED "Grade too low!" RESET);
}

/**
 * @brief AlreadySignedException
 * @return String to exception
 */
const char* Form::AlreadySignedException::what() const throw() {
	return (RED "Already Signed Form!" RESET);
}

/**
 * @brief Overload of the insertion («) operator
 * @param os OutPutStream
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& os, Form const& obj) {
	os << BLUE << obj.getName() << RESET << ". Signed? : "
	   << BLUE << obj.isSigned() << RESET << ". Required to Sign:"
	   << BLUE << obj.getGradeToSign() << RESET << ". Required to Execute:"
	   << BLUE << obj.getGradeToExecute() << RESET << std::endl;
	return (os);
}

