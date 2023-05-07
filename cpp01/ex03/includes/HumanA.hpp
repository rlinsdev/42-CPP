/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:12:00 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 09:51:56 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H

# include "Weapon.hpp"

class HumanA {
	private:
		std::string const	_name;
		Weapon const		&_weapon;

	public:
		HumanA(std::string const aName, Weapon const &aWepon);
		~HumanA(void);

		void	attack( void ) const;
};

#endif
