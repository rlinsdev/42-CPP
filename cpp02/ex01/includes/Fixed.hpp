/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:14:19 by rlins             #+#    #+#             */
/*   Updated: 2023/05/18 07:51:42 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>

class Fixed {
	private:
		int					_raw;
		static const int	_frac_nbr_bits = 8;

	public:
		Fixed(void);
		Fixed( Fixed const & src);
		~Fixed(void);

		Fixed &	operator=( Fixed const & src);
		int		getRawBits(void) const;
		void	setRawBits(int const _raw);
	};

#endif
