/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:47 by rlins             #+#    #+#             */
/*   Updated: 2023/07/16 15:01:52 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Color.hpp>
#include <iostream>

// void 	defaultConstructor(void);
// void	createFormTest(std::string name, int gradeToSign, int gradeToExecute);
// void	formGradeTest(void);
// void	copyConstructorTest(void);
// void	signFormTest(void) ;


int	main(void) {

	// defaultConstructor();
	// formGradeTest();
	// copyConstructorTest();
	// signFormTest();

	Bureaucrat	lowlyBureaucrat("Lowly Larry", 142);
	Bureaucrat	averageBureaucrat("Average Andy", 65);
	Bureaucrat	highBureaucrat("High Harry", 6);

	std::cout << std::endl << BG_WHITE BLACK "Three bureaucrats created:" RESET << std::endl;
	std::cout << "\t" << lowlyBureaucrat;
	std::cout << "\t" << averageBureaucrat;
	std::cout << "\t" << highBureaucrat << std::endl;

	ShrubberyCreationForm	shrubForm("Forest");
	RobotomyRequestForm		robotomyForm("CEO"); // By target
	PresidentialPardonForm	pardonForm(highBureaucrat.getName()); // By GetName

	std::cout << std::endl << BG_WHITE BLACK "Forms generated! " RESET << std::endl;
	std::cout << "\t" << shrubForm;
	std::cout << "\t" << robotomyForm;
	std::cout << "\t" << pardonForm;

	std::cout << std::endl << BG_WHITE BLACK "Signing and executing Shrubbery form: " RESET << std::endl;
	// std::cout << std::endl << "-- Signing and executing Shrubbery form:" << std::endl;
	lowlyBureaucrat.signForm(shrubForm);
	lowlyBureaucrat.executeForm(shrubForm);
	averageBureaucrat.executeForm(shrubForm);

	// std::cout << std::endl << "-- Signing and executing Presidential Pardon form:" << std::endl;
	std::cout << std::endl << BG_WHITE BLACK "Signing and executing Presidential Pardon form: " RESET << std::endl;
	highBureaucrat.executeForm(pardonForm);
	highBureaucrat.signForm(pardonForm);
	highBureaucrat.executeForm(pardonForm);
	highBureaucrat.incrementGrade();
	highBureaucrat.executeForm(pardonForm);

	std::cout << std::endl << BG_WHITE BLACK "Signing and executing Robotomy form: " RESET << std::endl;
	// std::cout << std::endl << "-- Signing and executing Robotomy form:" << std::endl;
	averageBureaucrat.executeForm(robotomyForm);
	averageBureaucrat.signForm(robotomyForm);
	averageBureaucrat.executeForm(robotomyForm);
	highBureaucrat.executeForm(robotomyForm);



	// std::cout << std::endl << BG_WHITE BLACK "End of Simulation" RESET << std::endl;

	return (0);
}

// /**
//  * @brief Constructor copy test
//  */
// void	copyConstructorTest(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Form Copy Constructor" RESET << std::endl;
// 	Form form("Form 004", 42, 42);
// 	std::cout << "Form is " << form.getName() << std::endl;
// 	Form formCopy(form);
// 	std::cout << "Form copy is " << formCopy.getName() << std::endl;
// }

// /**
//  * @brief Test to generate Bureaucrat and forms. Test to sign (with points and not enough points)
//  * Test to sign (and sign signed form)
//  */
// void	signFormTest(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat signing forms" RESET << std::endl;

// 	Bureaucrat	bobBureRight("Bob", 100);
// 	Bureaucrat	bobBureExcep("Frank", 41); // not grade enough

// 	Form	ftForm("42 Form", 42, 42);
// 	Form	formTest1("Form 0001", 20, 5);
// 	Form	formTest2("Form 0002", 5, 35);

// 	std::cout << "Try to sign invalid grade Bureaucrat: " << bobBureExcep.getName() << "." << std::endl;
// 	bobBureExcep.signForm(ftForm);

// 	std::cout << "Try to sign " << ftForm.getName() << ":" << std::endl;
// 	bobBureRight.signForm(ftForm);

// 	std::cout << "Try to sign " << formTest1.getName() << ":" << std::endl;
// 	bobBureRight.signForm(formTest1);

// 	std::cout << "Try to sign " << formTest2.getName() << ":" << std::endl;
// 	bobBureRight.signForm(formTest2);

// 	std::cout << "Try to sign (Again) the signed form: " << formTest2.getName() << ":" << std::endl;
// 	bobBureRight.signForm(formTest2);
// }
// /**
//  * @brief Form Grade test - Test correct and incorrect (sign and execute points)
//  */
// void	formGradeTest(void) {
// 	createFormTest("Form Correct 001", 42, 42);
// 	createFormTest("Form Error 002", 1, 0); // Error In Sign Points
// 	createFormTest("Form Error 003", -10, 50); // Error In Execute Points
// }

// /**
//  * @brief Test by default constructor to Form
//  */
// void	defaultConstructor(void) {
// 	std::cout << std::endl << BG_WHITE BLACK "Form default constructor" RESET << std::endl;
// 	Form	form;
// 	std::cout << "Default form is: " << form.getName() << std::endl;
// }

// /**
//  * @brief Create a Form Test object
//  * @param name Name of Form
//  * @param gradeToSign Must to be between 1 (max) to 150 (min)
//  * @param gradeToExecute Must to be between 1 (max) to 150 (min)
//  */
// void	createFormTest(std::string name, int gradeToSign, int gradeToExecute) {
// 	std::cout << "Creating form named " << BLUE
// 		<< name << RESET << " with grade To Sign " << BLUE << gradeToSign
// 		<< RESET << " with grade to execute " << BLUE << gradeToExecute
// 		<< RESET << ":" << std::endl;
// 	try {
// 		Form form(name, gradeToSign, gradeToExecute);
// 		std::cout << GREEN << form.getName() << " successfully created." << RESET << std::endl;
// 		return ;
// 	}
// 	catch(std::exception const & e) {
// 		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
// 	}
// }
