/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:18:49 by rlins             #+#    #+#             */
/*   Updated: 2023/05/25 08:39:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Fixed.hpp"

void	subject_test(void);
void	comparison_test(void);

int	main(void) {

	comparison_test();
	//subject_test();

	return (0);
}

/******************************************************************************/
/*BEGIN - Operators test*/
/******************************************************************************/
void	comp_greater(float vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	if (a > b) {
		std::cout << "Operator Greater (>) called. So... a > b" << std::endl;
	}
}
void	comp_less(float vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	if (a < b) {
		std::cout << "Operator Less (<) called. So... a < b" << std::endl;
	}
}

void	comp_less_equal(float vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	if (a <= b) {
		std::cout << "Operator Less Equals (<=) called. So... a <= b" << std::endl;
	}
}

void	comp_greater_equal(float vl_a, float vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	if (a <= b) {
		std::cout << "Operator Greater Equals (>=) called. So... a >= b" << std::endl;
	}
}

void	comp_equal(int vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	if (a == b) {
		std::cout << "Operator Equals (==) called. So... a == b" << std::endl;
	}
}

void	comp_diff(int vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	if (a != b) {
		std::cout << "Operator Different (!=) called. So... a != b" << std::endl;
	}
}

void	comparison_test(void) {
	std::cout << "\t**** Comparison test ****" << std::endl;

	comp_greater(42.5f, 0);
	comp_less(42.5f, 50);
	comp_less_equal(42.5f, 50);
	comp_greater_equal(42.5f, 42.5f);
	comp_equal(5, 5);
	comp_diff(9, 12);
}
/******************************************************************************/
/*END - Operators test*/
/******************************************************************************/

/**
 * @brief Subject test - Code from PDF
 */
void	subject_test(void) {
	// std::cout << "Subject test" << std::endl;
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
}
