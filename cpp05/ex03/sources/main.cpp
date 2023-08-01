/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:47 by rlins             #+#    #+#             */
/*   Updated: 2023/08/01 06:56:12 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>
#include <Color.hpp>
#include <iostream>

void	testInternFormCreation(std::string formName, std::string target);

int	main(void) {

	std::string const	shrubberyFormName = "shrubbery creation";
	std::string const	robotomyFormName = "robotomy request";
	std::string const	presidentialFormName = "presidential pardon";

	testInternFormCreation(shrubberyFormName, "Garden");
	testInternFormCreation(robotomyFormName, "Unsuspecting Customer");
	testInternFormCreation(presidentialFormName, "Jesus");
	testInternFormCreation("Bad Form Name", "Mr. X");
	testInternFormCreation("", "");

	std::cout << std::endl << BG_WHITE BLACK "End of Simulation" RESET << std::endl;

	return (0);
}

/**
 * @brief TODO
 *
 * @param formName
 * @param target
 */
void	testInternFormCreation(std::string formName, std::string target) {
	std::cout << "Creating form named " << BLUE
		<< formName << RESET << " with target " << BLUE << target
		<< RESET << std::endl;

	Intern	lowlyIntern = Intern();
	Bureaucrat bigBoss("Big Boss Bob", 1);
	AForm *	form;
	try {
		form = lowlyIntern.makeForm(formName, target);
		bigBoss.signForm(*form);
		bigBoss.executeForm(*form);
		delete (form);
	}
	catch (std::exception & e) {
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
}
