/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:14:19 by rlins             #+#    #+#             */
/*   Updated: 2023/05/17 06:23:04 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>

class Fixed {
	private:
		int		_fixed_point_value;

	public:
		Fixed(void);
		// Zombie(std::string name);
		~Fixed(void);

		// void	announce(void);
	};

#endif
