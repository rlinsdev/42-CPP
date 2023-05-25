/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:14:57 by rlins             #+#    #+#             */
/*   Updated: 2023/05/25 08:43:02 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <cmath>
#include <iostream>

/******************************************************************************/
/*BEGIN - Constructor and destructor*/
/******************************************************************************/
/**
 * @brief Default Constructor
 */
Fixed::Fixed(void) : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Construct - Integer parameter
 * @param n
 */
Fixed::Fixed(int const n): _raw(n << _frac_nbr_bits) {
	// std::cout << "Int constructor called." << std::endl;
	return ;
}

/**
 * @brief Construct - Float parameter
 * @param f
 */
Fixed::Fixed(float const f): _raw(roundf(f * (1 << _frac_nbr_bits))) {
	// std::cout << "Float constructor called." << std::endl;
	return ;
}

/**
 * @brief Destructor
 */
Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

/******************************************************************************/
/*END - Constructor and destructor*/
/******************************************************************************/

/******************************************************************************/
/*BEGIN - comparison Operators*/
/******************************************************************************/
/**
 * @brief Copy assignment operator
 */
Fixed & Fixed::operator=(Fixed const & src) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &src) {
		this->_raw = src.getRawBits();
	}
	return (*this);
}
bool	Fixed::operator>(const Fixed& value) {
	if (this->_raw > value._raw) {
		return (true);
	} else {
		return (false);
	}
}
bool	Fixed::operator<(const Fixed& value) {
	if (this->_raw < value._raw) {
		return (true);
	} else {
		return (false);
	}
}
bool	Fixed::operator<=(const Fixed& value) {
	if (this->_raw <= value._raw) {
		return (true);
	} else {
		return (false);
	}
}
bool	Fixed::operator>=(const Fixed& value) {
	if (this->_raw >= value._raw) {
		return (true);
	} else {
		return (false);
	}
}
bool	Fixed::operator==(const Fixed& value) {
	if (this->_raw == value._raw) {
		return (true);
	} else {
		return (false);
	}
}
bool	Fixed::operator!=(const Fixed& value) {
	if (this->_raw != value._raw) {
		return (true);
	} else {
		return (false);
	}
}
/******************************************************************************/
/*END - comparison Operators*/
/******************************************************************************/

/**
 * @brief Getter
 * @return int
 */
int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called." << std::endl;
	return (this->_raw);
}

/**
 * @brief Setter
 */
void	Fixed::setRawBits(int const _raw) {
	// std::cout << "SetRawBits called." << std::endl;
	this->_raw = _raw;
	return ;
}

/**
 * @brief To Float Function.
 * Converts the fixed-point value to a floating-point value
 * @return float
 */
float	Fixed::toFloat(void) const {
	return ((float)this->_raw / (1 << _frac_nbr_bits));
}

/**
 * @brief To int Function
 * Converts the fixed-point value to an integer value.
 * @return int
 */
int		Fixed::toInt(void) const  {
	return (this->_raw >> _frac_nbr_bits);
}

/**
 * @brief Overload of operator <<
 * @param os
 * @param number
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& os, const Fixed& number) {
	os << number.toFloat();
	return (os);
}
