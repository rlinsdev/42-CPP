/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:11 by rlins             #+#    #+#             */
/*   Updated: 2023/06/05 08:13:49 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_H
# define CLAP_H

# include <string>

class ClapTrap {
	private:
		ClapTrap(void);
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:

		// Static Constants
		static int const	c_hitPoints = 10;
		static int const	c_energyPoints = 10;
		static int const	c_attackDamagePoints = 0;

		// Constructor and destructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		// Operator by Orthodox Canonical Form
		ClapTrap &	operator=(ClapTrap const & src);

		// Getters and setters
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		void			setAttackDamage(unsigned int value);

		// Public members from subject
		void		attack(std::string & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	};

#endif
