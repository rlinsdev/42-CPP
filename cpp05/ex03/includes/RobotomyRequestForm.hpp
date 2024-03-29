/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:59:12 by rlins             #+#    #+#             */
/*   Updated: 2023/07/16 10:42:24 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_R_F_H
# define ROBOTOMY_R_F_H

# include <AForm.hpp>

class RobotomyRequestForm : public AForm {

	public:
		// Constructor
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target); // Target - Subject

		// Copy constructor
		RobotomyRequestForm(RobotomyRequestForm const & src);

		// Destructor
		~RobotomyRequestForm(void);

		// Copy assignment operator
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & src);

		// Accessors: Getters Setters
		std::string const &	getTarget(void) const;

		void	beExecuted(void) const;

		// Subject values
		static int const	gradeToSign = 72;
		static int const	gradeToExecute = 45;

	private:
		std::string	_target;
};

#endif
