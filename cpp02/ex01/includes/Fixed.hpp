/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:14:19 by rlins             #+#    #+#             */
/*   Updated: 2023/05/20 08:19:54 by rlins            ###   ########.fr       */
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
		Fixed(int const n);
		Fixed(float const f);

		Fixed &	operator=( Fixed const & src);
		int		getRawBits(void) const;
		void	setRawBits(int const _raw);

		float	toFloat(void) const;
		int		toInt(void) const;
	};

#endif
