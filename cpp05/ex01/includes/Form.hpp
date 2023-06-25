/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:51:37 by rlins             #+#    #+#             */
/*   Updated: 2023/06/25 10:51:47 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;
class Form {

	public:

		// Constructor and destructor
		Form(void);
		Form(Form const & src);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form(void);

		// Operator by Orthodox Canonical Form
		Form &	operator=(Form const & src);

		std::string 	getName(void) const;
		bool			isSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;

		void	beSigned(Bureaucrat const & Bureaucrat);

		/**
		 * @brief Please note that exception classes don’t have to be designed in
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
		class AlreadySignedException: public std::exception {
			public:
				virtual const char *what(void) const throw();
		};

	private:
		std::string const	_name;
		bool				_isSigned;

		int const			_gradeToSign;
		int const 			_gradeToExecute;
	};

	std::ostream &	operator<<(std::ostream & os, Bureaucrat const & obj);

#endif
