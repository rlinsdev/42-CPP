/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:52:29 by rlins             #+#    #+#             */
/*   Updated: 2023/07/13 20:29:34 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <Color.hpp>
#include <iostream>

/**
 * @brief Default Constructor
 */
AForm::AForm(void) : 	_name("Basic Form"),
				 	_isSigned(false),
					_gradeToSign(Bureaucrat::c_min_grade),
					_gradeToExecute(Bureaucrat::c_max_grade) {
	std::cout << CYAN "Form constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Construct a new AForm:: AForm object
 * @param name Name of AForm
 * @param gradeToSign Must to be between 1 (max) to 150 (min)
 * @param gradeToExecute Must to be between 1 (max) to 150 (min)
 */
AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) :
					_name(name),
				 	_isSigned(false),
					_gradeToSign(gradeToSign),
					_gradeToExecute(gradeToExecute) {
	if (gradeToSign < Bureaucrat::c_max_grade || gradeToExecute < Bureaucrat::c_max_grade) {
		throw AForm::GradeTooHighException();
	} else if (gradeToSign > Bureaucrat::c_min_grade || gradeToExecute > Bureaucrat::c_min_grade) {
		throw AForm::GradeTooLowException();
	}
	//std::srand(time(0));
}

/**
 * @brief Copy constructor
 */
AForm::AForm(AForm const & src) :
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
AForm::~AForm(void) {
	std::cout << YELLOW "Form - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
AForm & AForm::operator=(AForm const & src) {
	if (this != &src) {
		this->_isSigned = src._isSigned;
	}
	std::cout << "AForm - Copy assignment operator called." << std::endl;
	return (*this);
}

/**
 * @brief Accessors - Get Name of a AForm
 * @return
 */
std::string	AForm::getName(void) const {
	return (this->_name);
}

/**
 * @brief Accessor - Get the info if AForm is signed
 * @return boolean
 */
bool	AForm::isSigned(void) const {
	return (this->_isSigned);
}

/**
 * @brief Accessors - Get Grade of a AForm
 * @return int
 */
int	AForm::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}

/**
 * @brief Accessors - Get Grade of a AForm
 * @return int
 */
int	AForm::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

/**
 * @brief Sign the AForm.
 * "It changes the form status to signed if the bureaucrat’s grade is high enough
 * (higher or egal to the required one)"
 * @param bureaucrat
 */
void	AForm::beSigned(Bureaucrat const & bureaucrat) {
	if (this->_isSigned) {
		throw (AForm::AlreadySignedException());
	}
	if (bureaucrat.getGrade() < this->_gradeToSign) {
		throw (AForm::GradeTooLowException());
	}
	this->_isSigned = true;
	return ;
}

/**
 * @brief TODO
 *
 * @param bureaucrat
 */
void	AForm::execute(Bureaucrat const & bureaucrat) const {
	if (this->_isSigned == false) {
		throw (AForm::NotSignedException());
	}
	if (bureaucrat.getGrade() < this->_gradeToSign) {
		throw (AForm::GradeTooLowException());
	}
	this->beExecuted();
	return ;
}

/**
 * @brief GradeTooHighException -
 * @return string exception
 */
const char* AForm::GradeTooHighException::what() const throw() {
	return (RED "Grade too high!" RESET);
}

/**
 * @brief GradeTooLowException
 * @return String to exception
 */
const char* AForm::GradeTooLowException::what() const throw() {
	return (RED "Grade too low!" RESET);
}

/**
 * @brief AlreadySignedException
 * @return String to exception
 */
const char* AForm::AlreadySignedException::what() const throw() {
	return (RED "Already Signed AForm!" RESET);
}

/**
 * @brief TODO
 *
 * @return const char*
 */
const char*	AForm::NotSignedException::what() const throw() {
	return (RED "orm has not been signed!" RESET);
}

/**
 * @brief Overload of the insertion («) operator
 * @param os OutPutStream
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& os, AForm const& obj) {
	os << BLUE << obj.getName() << RESET << ". Signed? : "
	   << BLUE << obj.isSigned() << RESET << ". Required to Sign:"
	   << BLUE << obj.getGradeToSign() << RESET << ". Required to Execute:"
	   << BLUE << obj.getGradeToExecute() << RESET << std::endl;
	return (os);
}

