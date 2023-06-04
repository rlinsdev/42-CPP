/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:40:11 by rlins             #+#    #+#             */
/*   Updated: 2023/06/04 07:50:50 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_H
# define CLAP_H

# include <string>

class ClapTrap {
	private:
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & src);
	};

#endif
