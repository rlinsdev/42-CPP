/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:54:06 by rlins             #+#    #+#             */
/*   Updated: 2023/08/02 07:24:08 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_P_F_H
# define INTERN_P_F_H

# include <AForm.hpp>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class Intern {

	public:
		// Constructor
		Intern(void);

		// Copy constructor
		Intern(Intern const & src);

		// Destructor
		~Intern(void);

		// Copy assignment operator
		Intern &	operator=(Intern const & src);

		AForm *	makeForm(std::string formName, std::string target);

		class InvalidFormName : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};

	private:
		typedef struct	sFormList {
			std::string const &	formName;
			AForm *	(*function)(std::string const &);
		}	formList;
};

#endif
