/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:31:29 by rlins             #+#    #+#             */
/*   Updated: 2023/07/16 10:43:27 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_C_F_H
# define SHRUBBERY_C_F_H

# include <AForm.hpp>

class ShrubberyCreationForm : public AForm {

	public:
		// Constructor
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & target);  // Target - Subject

		// Copy constructor
		ShrubberyCreationForm(ShrubberyCreationForm const & src);

		// Destructor
		~ShrubberyCreationForm(void);

		// Copy assignment operator
		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & src);

		// Accessors: Getters Setters
		std::string const &	getTarget(void) const;

		void	beExecuted(void) const;

		// Subject values
		static int const	gradeToSign = 145;
		static int const	gradeToExecute = 137;

	private:
		std::string	_target;
		static std::string const	_shrubbery;
		static std::string const	_shrubberyAlt;
};

#endif
