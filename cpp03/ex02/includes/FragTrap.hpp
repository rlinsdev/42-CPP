/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:56:08 by rlins             #+#    #+#             */
/*   Updated: 2023/06/08 12:04:52 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_H
# define FRAG_H

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap {

	public:

		FragTrap(std::string & name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & src);

		void	highFivesGuys(void);

		// Static Constants
		static int const	c_frag_hitPoints = 100;
		static int const	c_frag_energyPoints = 100;
		static int const	c_frag_attackDamagePoints = 30;

	private:
		FragTrap(void);
};

#endif
