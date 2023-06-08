/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:17:07 by rlins             #+#    #+#             */
/*   Updated: 2023/06/08 08:13:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_H
# define SCAV_H

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap {

	public:

		ScavTrap(std::string & name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & src);

		void	attack(std::string & target);
		void	guardGate(void);

		// Static Constants
		static int const	c_scav_hitPoints = 100;
		static int const	c_scav_energyPoints = 50;
		static int const	c_scav_attackDamagePoints = 20;

	private:
		ScavTrap(void);
};

#endif
