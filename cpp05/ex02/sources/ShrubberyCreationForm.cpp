/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:34:55 by rlins             #+#    #+#             */
/*   Updated: 2023/07/14 08:55:37 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <Color.hpp>
#include <cstdlib>
#include <fstream>

/**
 * @brief Default Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery Creation Form",
					ShrubberyCreationForm::gradeToSign,
					ShrubberyCreationForm::gradeToExecute),
					_target("Unknown") {
		std::cout << CYAN "ShrubberyCreationForm constructor Called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 * @param src
 */
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src),
			_target(src._target) {
	std::cout << CYAN "ShrubberyCreationForm - Copy constructor called." RESET << std::endl;
	return ;
}

// ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
// 		:	AForm("Presidential Pardon Form",
// 					ShrubberyCreationForm::gradeToSign,
// 					ShrubberyCreationForm::gradeToExecute),
// 			_target(target)
// {
// 	std::cout << CYAN "ShrubberyCreationForm attribute constructor called."
// 		RESET << std::endl;
// 	if (_target.empty())
// 		_target = "Unknown";
// 	return ;
// }

/**
 * @brief Destructor
 */
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << YELLOW "ShrubberyCreationForm - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	this->_target = src._target;
	return (*this);
}

/**
 * @brief Accessor - getTarget
 */
std::string const &	ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

/**
 * @brief Subject: Create a file <target>_shrubbery in the working directory, and writes ASCII trees
 * inside it.
 * https://ascii.co.uk/art/tree
 */
void	ShrubberyCreationForm::beExecuted(void) const {
	std::ofstream	ofs;

	ofs.open((this->_target + "_shrubbery").c_str(),
								std::ofstream::out | std::ofstream::app);

	// TODO: Necessário random aqui?

	if (ofs.is_open())
	{
		if (std::rand() % 2)
			ofs << ShrubberyCreationForm::_shrubbery;
		else
			ofs << ShrubberyCreationForm::_shrubberyAlt;
		std::cout << "A shrubbery has been planted at "
				<< _target << "_shrubbery." << std::endl;
		ofs.close();
	}
	return ;
}

std::string const ShrubberyCreationForm::_shrubbery =
"\n"
"                %%%,%%%%%%%\n"
"                 ,'%% \\\\-*%%%%%%%\n"
"           ;%%%%%*%   _%%%%\"\n"
"            ,%%%       \\(_.*%%%%.\n"
"            % *%%, ,%%%%*(    '\n"
"          %^     ,*%%% )\\|,%%*%,_\n"
"               *%    \\/ #).-\"*%%*\n"
"                   _.) ,/ *%,\n"
"           _________/)#(_____________\n\n";

std::string const	ShrubberyCreationForm::_shrubberyAlt =
"\n"
"           \\/ |    |/\n"
"        \\/ / \\||/  /_/___/_\n"
"         \\/   |/ \\/\n"
"    _\\__\\_\\   |  /_____/_\n"
"           \\  | /          /\n"
"  __ _-----`  |{,-----------~\n"
"            \\ }{\n"
"             }{{\n"
"             }}{\n"
"             {{}\n"
"       , -=-~{ .-^- _\n"
"             `}\n"
"              {\n\n";
