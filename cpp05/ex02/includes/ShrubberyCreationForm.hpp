/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:31:29 by rlins             #+#    #+#             */
/*   Updated: 2023/07/14 08:36:24 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_C_F_H
# define SHRUBBERY_C_F_H

# include <AForm.hpp>

class ShrubberyCreationForm : public AForm {

	public:
		// Constructor and destructor
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		// ShrubberyCreationForm(std::string const & target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & src);

		// Accessors: Getters Setters
		std::string const &	getTarget(void) const;

		void	beExecuted(void) const;

		// Subject values
		static int const	gradeToSign = 145;
		static int const	gradeToExecute = 4137;

	private:
		std::string	_target;
		static std::string const	_shrubbery;
		static std::string const	_shrubberyAlt;
};

#endif
