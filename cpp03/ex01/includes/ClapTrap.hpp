/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:11 by rlins             #+#    #+#             */
/*   Updated: 2023/06/08 08:41:45 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_H
# define CLAP_H

# include <string>

class ClapTrap {

	public:

		// Static Constants
		static int const	c_clap_hitPoints = 10;
		static int const	c_clap_energyPoints = 10;
		static int const	c_clap_attackDamagePoints = 0;

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

	protected: // private will get error of compilation. Must be protected
		ClapTrap(void);
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	};

#endif
