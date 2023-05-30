/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:14:19 by rlins             #+#    #+#             */
/*   Updated: 2023/05/30 07:23:32 by rlins            ###   ########.fr       */
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
		// Constructor and destructors
		Fixed(void);
		Fixed( Fixed const & src);
		~Fixed(void);
		Fixed(int const n);
		Fixed(float const f);

		Fixed &	operator=( Fixed const & src);

		// Comparison Operators
		bool	operator>(const Fixed& value);
		bool	operator<(const Fixed& value);
		bool	operator>=(const Fixed& value);
		bool	operator<=(const Fixed& value);
		bool	operator==(const Fixed& value);
		bool	operator!=(const Fixed& value);

		// Arithmetic Operators
		Fixed	operator+(const Fixed& value);
		Fixed	operator-(const Fixed& value);
		Fixed	operator/(const Fixed& value);
		Fixed	operator*(const Fixed& value);

		// Increment Decrement Operators
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static Fixed		&max(Fixed& obj1, Fixed& obj2);
		static Fixed		&min(Fixed& obj1, Fixed& obj2);
		static Fixed const	&max(const Fixed& obj1, const Fixed& obj2);
		static Fixed const	&min(const Fixed& obj1, const Fixed& obj2);


		int		getRawBits(void) const;
		void	setRawBits(int const _raw);

		float	toFloat(void) const;
		int		toInt(void) const;
	};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif
