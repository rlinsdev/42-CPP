/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Default.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:38:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/09 08:05:56 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFAULT_H
# define DEFAULT_H

# include <string>

class Default {
	// private:
	// 	ClapTrap(void);
	// 	std::string		_name;
	// 	unsigned int	_hitPoints;

	public:

		// // Static Constants
		// static int const	c_hitPoints = 10;
		// static int const	c_energyPoints = 10;

		// Constructor and destructor
		Default(void);
		Default(Default const & src);
		Default(std::string const & type)
		~Default(void);

		// Operator by Orthodox Canonical Form
		Default &	operator=(Default const & src);

		// // Getters and setters
		// std::string		getName(void) const;
		// unsigned int	getHitPoints(void) const;

		// // Public members from subject
		// void		attack(std::string & target);
		// void		takeDamage(unsigned int amount);
	};

#endif
