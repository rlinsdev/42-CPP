/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:47 by rlins             #+#    #+#             */
/*   Updated: 2023/06/28 07:17:26 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>
#include <Bureaucrat.hpp>
#include <Color.hpp>
#include <iostream>

void 	defaultConstructor(void);
void	createFormTest(std::string name, int gradeToSign, int gradeToExecute);
void	formGradeTest(void);
// void	incrementDecrementTest(void);
// void	decrementException(void);
// void	incrementException(void);


int	main(void) {

	defaultConstructor();
	formGradeTest();
	// incrementDecrementTest();
	// decrementException();
	// incrementException();

	std::cout << std::endl << BG_WHITE BLACK "End of Simulation" RESET << std::endl;

	return (0);
}

/**
 * @brief
 *
 */
void	formGradeTest(void) {
	createFormTest("Form 001 - Right", 42, 42);
	createFormTest("Form 002 - Error In Sign Points", 1, 0);
	createFormTest("Form 003 - Error In Execute Points", -10, 50);
}

/**
 * @brief Test by default constructor to Form
 */
void	defaultConstructor(void) {
	std::cout << std::endl << BG_WHITE BLACK "Form default constructor" RESET << std::endl;
	Form	form;
	std::cout << "Default form is: " << form.getName() << std::endl;
}

// /**
//  * @brief Test to check the CreateBureaucrat by Name and grade
//  */
// void	nameGradeConstructor(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat Name and Grade constructor" RESET << std::endl;
// 	createBureaucratTest("Michael", 20);
// 	createBureaucratTest("Rick", 150);
// 	createBureaucratTest("Rock", -10);
// 	createBureaucratTest("Mustang", 200);
// }

// /**
//  * @brief Decrement exception test
//  */
// void	decrementException(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat Decrement Exception test" RESET << std::endl;

// 	Bureaucrat bureMart("Martina", 150);
// 	try {
// 		std::cout << "Decrementing grade by 1. Result must be " << bureMart.getGrade() + 1 << ":" << std::endl;
// 		bureMart.decrementGrade();
// 	}
// 	catch(Bureaucrat::GradeTooLowException & e) {
// 		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
// 	}
// }


// /**
//  * @brief Increment exception test
//  */
// void	incrementException(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat Increment Exception test" RESET << std::endl;

// 	Bureaucrat bureMath("Matheus", 1);
// 	try {
// 		std::cout << "Incrementing grade by 1. Result must be " << bureMath.getGrade() - 1 << ":" << std::endl;
// 		bureMath.incrementGrade();
// 	}
// 	catch(Bureaucrat::GradeTooHighException & e) {
// 		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
// 	}
// }

// /**
//  * @brief Increment and decrement test with success
//  */
// void	incrementDecrementTest(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat Increment Decrement test" RESET << std::endl;

// 	Bureaucrat bureTom("Tomas", 42);
// 	try {
// 		std::cout << "Decrementing grade by 1. Result must be " << bureTom.getGrade() + 1 << ":" << std::endl;
// 		bureTom.decrementGrade();

// 		std::cout << "Incrementing grade by 1. Result must be " << bureTom.getGrade() - 1 << ":" << std::endl;
// 		bureTom.incrementGrade();
// 	}
// 	catch(Bureaucrat::GradeTooHighException & e) {
// 		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
// 	}
// 	catch(Bureaucrat::GradeTooLowException & e) {
// 		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
// 	}
// }


/**
 * @brief Create a Form Test object
 *
 * @param name
 * @param gradeToSign Must to be between 
 * @param gradeToExecute
 */
void	createFormTest(std::string name, int gradeToSign, int gradeToExecute) {
	std::cout << "Creating form named " << BLUE
		<< name << RESET << " with grade To Sign " << BLUE << gradeToSign
		<< RESET << " with grade to execute " << BLUE << gradeToExecute
		<< RESET << ":" << std::endl;
	try {
		Form form(name, gradeToSign, gradeToExecute);
		std::cout << form.getName() << " successfully created." << std::endl;
		return ;
	}
	catch(std::exception const & e) {
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
}
