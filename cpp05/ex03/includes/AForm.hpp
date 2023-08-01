/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:47:25 by rlins             #+#    #+#             */
/*   Updated: 2023/08/01 06:57:18 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;
class AForm {

	public:

		// Constructor and destructor
		AForm(void);
		AForm(AForm const & src);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm(void);

		// Operator by Orthodox Canonical AForm
		AForm &	operator=(AForm const & src);

		std::string 	getName(void) const;
		bool			isSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;

		void	beSigned(Bureaucrat const & Bureaucrat);
		void	execute(Bureaucrat const & bureaucrat) const;

		/**
		 * @brief Please note that exception classes don’t have to be designed in
		 * Orthodox Canonical AForm
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
		class NotSignedException : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};

	protected:
		virtual void	beExecuted(void) const = 0;

	private:
		std::string const	_name;
		bool				_isSigned;

		// A constant grade required to sign it.
		int const			_gradeToSign;
		// And a constant grade required to execute it.
		int const 			_gradeToExecute;
	};

	std::ostream &	operator<<(std::ostream & os, AForm const & obj); // Base class, not more Bureaucrat

#endif
