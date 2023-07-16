/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:32:31 by rlins             #+#    #+#             */
/*   Updated: 2023/07/16 10:31:50 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_P_F_H
# define PRESIDENTIAL_P_F_H

# include <AForm.hpp>

class PresidentialPardonForm : public AForm {

	public:
		// Constructor
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target); // Target Subject

		// Copy constructor
		PresidentialPardonForm(PresidentialPardonForm const & src);

		// Destructor
		~PresidentialPardonForm(void);

		// Copy assignment operator
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & src);

		// Accessors: Getters Setters
		std::string const &	getTarget(void) const;

		void	beExecuted(void) const;

		// Subject values
		static int const	gradeToSign = 25;
		static int const	gradeToExecute = 5;

	private:
		std::string	_target;
};

#endif
