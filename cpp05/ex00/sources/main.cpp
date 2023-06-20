/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:47 by rlins             #+#    #+#             */
/*   Updated: 2023/06/20 07:46:59 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Color.hpp>
#include <iostream>

void	createBureaucratTest(std::string name, int grade);
void 	defaultConstructor(void);
void	nameGradeConstructor(void);

int	main(void) {

	// defaultConstructor();
	nameGradeConstructor();

	return (0);
}

/**
 * @brief Test to check the CreateBureaucrat by Name and grade
 */
void	nameGradeConstructor(void) {
	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat Name and Grade constructor" RESET << std::endl;
	createBureaucratTest("Michael", 20);
	createBureaucratTest("Rick", 150);
	createBureaucratTest("Rock", -10);
	createBureaucratTest("Mustang", 200);
}

/**
 * @brief Test by default constructor to Bureaucrat
 */
void	defaultConstructor(void) {
	std::cout << std::endl << BG_WHITE BLACK "Bureaucrat default constructor" RESET << std::endl;
	Bureaucrat	bureaucrat;
	std::cout << "Default bureaucrat is: " << bureaucrat << std::endl;
}

/**
 * @brief Create a Bureaucrat Test. Protected code by Try Catch Statements
 * @param name of Bureaucrat
 * @param grade by Bureaucrat
 */
void	createBureaucratTest(std::string name, int grade) {
	std::cout << "Creating bureaucrat named " << BLUE
		<< name << RESET << " with grade " << BLUE << grade << RESET << ":" << std::endl;
	try {
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat << " successfully created." << std::endl;
		return ;
	}
	catch(Bureaucrat::GradeTooHighException & e) {
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e) {
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
}
