/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:19:24 by rlins             #+#    #+#             */
/*   Updated: 2023/07/13 07:20:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURE_H
# define BURE_H

# include <string>

class Bureaucrat {
	private:
		std::string const	_name;
		int					_grade;

		static int const	c_max_grade = 1;
		static int const	c_min_grade = 150;

	public:

		// Constructor and destructor
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		// Operator by Orthodox Canonical Form
		Bureaucrat &	operator=(Bureaucrat const & src);

		std::string 	getName(void) const;
		int				getGrade(void) const;

		int		incrementGrade(void);
		int		decrementGrade(void);

		/**
		 * @brief  Please note that exception classes don’t have to be designed in
		 * Orthodox Canonical Form
		 */
		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what(void) const throw();
		};
	};

	std::ostream &	operator<<(std::ostream & os, Bureaucrat const & obj);

#endif
