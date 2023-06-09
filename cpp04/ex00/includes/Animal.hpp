/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:38:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/09 08:20:32 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal {
	// private:
	// 	ClapTrap(void);
	// 	std::string		_name;
	// 	unsigned int	_hitPoints;

	public:

		// // Static Constants
		// static int const	c_hitPoints = 10;
		// static int const	c_energyPoints = 10;

		// Constructor and destructor
		Animal(void);
		Animal(Animal const & src);
		Animal(std::string const & type);
		~Animal(void);

		// Operator by Orthodox Canonical Form
		Animal &	operator=(Animal const & src);

		// Getters and setters
		std::string		getType(void) const;
		// unsigned int	getHitPoints(void) const;

		// // Public members from subject
		// void		attack(std::string & target);
		// void		takeDamage(unsigned int amount);
	protected:
		std::string	_type;

};

#endif
