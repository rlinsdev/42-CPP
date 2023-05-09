/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:19:31 by rlins             #+#    #+#             */
/*   Updated: 2023/05/09 08:03:02 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB {
	private:
		std::string const	_name;
		Weapon		 		*_weapon;

	public:
		HumanB(std::string const bName);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &aWeapon);
};

#endif
