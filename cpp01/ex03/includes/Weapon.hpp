/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:21:18 by rlins             #+#    #+#             */
/*   Updated: 2023/05/05 07:42:40 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <string>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon(/* args */);
		~Weapon();

		std::string const	getType(void) const;
		void				setType(std::string const newType);
};

#endif
