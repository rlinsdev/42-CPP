/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:19:31 by rlins             #+#    #+#             */
/*   Updated: 2023/05/05 07:47:01 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H

# include "Weapon.hpp"

class HumanB {
	private:
		std::string const	_name;
		Weapon const 		_weapon;

	public:
		HumanB(/* args */);
		~HumanB();

		void	attack( void ) const;
};

#endif