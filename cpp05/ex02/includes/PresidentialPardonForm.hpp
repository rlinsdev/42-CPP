/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:32:31 by rlins             #+#    #+#             */
/*   Updated: 2023/07/14 07:57:25 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_P_F_H
# define PRESIDENTIAL_P_F_H

# include <AForm.hpp>

class PresidentialPardonForm : public AForm {

	public:
		// Constructor and destructor
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		// PresidentialPardonForm(std::string const & target);
		~PresidentialPardonForm(void);

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
