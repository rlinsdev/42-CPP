/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:36:16 by rlins             #+#    #+#             */
/*   Updated: 2023/05/03 16:59:27 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <string>

class Zombie {
	private:
		std::string _name;
		std::string getName(void) const;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	setName(std::string const name);
		void	announce(void);
	};

#endif
