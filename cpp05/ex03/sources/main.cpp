/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:47 by rlins             #+#    #+#             */
/*   Updated: 2023/08/02 07:35:55 by rlins            ###   ########.fr       */
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
	testInternFormCreation("shrubbery generate", "Garden");
	testInternFormCreation("robotomy request", "Customer");
	testInternFormCreation("presidential pardon", "Douglas Adams");
	testInternFormCreation("Any name", "whatever");
	testInternFormCreation("", "");

	std::cout << std::endl << BG_WHITE BLACK "End of Simulation" RESET << std::endl;
	return (0);
}

/**
 * @brief Generate Forms. Responsible to create a new instance of Intern and Bureaucrat.
 * Will call Make Form and try go sign and execute form.
 * @param formName Name of Form. Must be a pattern
 * @param target Target of form
 */
void	testInternFormCreation(std::string formName, std::string target) {
	std::cout << BG_WHITE << "Form!" << RESET << " Creating form named " << BLUE
		<< formName << RESET << " with target " << BLUE << target
		<< RESET << std::endl;

	Intern	overloadedIntern = Intern();
	Bureaucrat bigBoss("Big Boss Bob", 1);
	AForm *	form;
	try {
		form = overloadedIntern.makeForm(formName, target);
		bigBoss.signForm(*form);
		bigBoss.executeForm(*form);
		delete (form);
	}
	catch (std::exception & e) {
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
}
