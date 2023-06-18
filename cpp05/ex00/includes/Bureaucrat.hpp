/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:19:24 by rlins             #+#    #+#             */
/*   Updated: 2023/06/18 10:20:38 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURE_H
# define BURE_H

# include <string>

class Bureaucrat {
	private:
		Bureaucrat(void);

	public:

		// Constructor and destructor
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		// Operator by Orthodox Canonical Form
		Bureaucrat &	operator=(Bureaucrat const & src);

		// Getters and setters
		// std::string		getName(void) const;
		// void			setAttackDamage(unsigned int value);

		// Public members from subject
		// void		attack(std::string & target);

	};

#endif
