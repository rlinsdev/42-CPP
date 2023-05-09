/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 07:21:18 by rlins             #+#    #+#             */
/*   Updated: 2023/05/09 08:03:15 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon(std::string const type);
		~Weapon(void);

		std::string const	&getType(void) const;
		void				setType(std::string const newType);
};

#endif
