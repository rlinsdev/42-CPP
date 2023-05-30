/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 06:18:49 by rlins             #+#    #+#             */
/*   Updated: 2023/05/30 08:01:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Fixed.hpp"

void	subject_test(void);
void	comparison_test(void);
void	arithmetic_test(void);
void	increment_decrement_test(void);
void	min_max_test();

int	main(void) {

	comparison_test();
	arithmetic_test();
	increment_decrement_test();
	min_max_test();

	//subject_test();
	return (0);
}


/******************************************************************************/
/*BEGIN - Min Max test test*/
/******************************************************************************/

void	max(int vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << " Value b: " << b << ".: max: " << Fixed::max(a, b) << std::endl;
}
void	max_const(int vl_a, int vl_b) {
	Fixed const a(vl_a);
	Fixed const b(vl_b);

	std::cout << "Value a: " << a << " Value b: " << b << ".: max: " << Fixed::max(a, b) << std::endl;
}
void	min(int vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << " Value b: " << b << ".: min: " << Fixed::min(a, b) << std::endl;
}
void	min_const(int vl_a, int vl_b) {
	Fixed const a(vl_a);
	Fixed const b(vl_b);

	std::cout << "Value a: " << a << " Value b: " << b << ".: min: " << Fixed::min(a, b) << std::endl;
}

void	min_max_test() {
	std::cout << "\t**** Inc/Decrement test ****" << std::endl;

	max(1, 5);
	max_const(12, 52);
	min(12, 6);
	min_const(200, 8);
}
/******************************************************************************/
/*END - Min Max test test*/
/******************************************************************************/


/******************************************************************************/
/*BEGIN - Increment  / Decrement Operators test*/
/******************************************************************************/
void	pre_increment() {
	Fixed a;
	std::cout << "Value a: " << a.getRawBits() << std::endl;
	++a;
	std::cout << "Value a Pre incremented: " << a.getRawBits() << std::endl;

}
void	pos_increment() {
	Fixed a;
	std::cout << "Value a: " << a.getRawBits() << std::endl;
	a++;
	std::cout << "Value a Pos incremented: " << a.getRawBits() << std::endl;
}
void	pre_decrement() {
	Fixed a;
	std::cout << "Value a: " << a.getRawBits() << std::endl;
	--a;
	std::cout << "Value a Pre incremented: " << a.getRawBits() << std::endl;

}
void	pos_decrement() {
	Fixed a;
	std::cout << "Value a: " << a.getRawBits() << std::endl;
	a--;
	std::cout << "Value a Pos incremented: " << a.getRawBits() << std::endl;
}

void	increment_decrement_test(void) {
	std::cout << "\t**** Inc/Decrement test ****" << std::endl;

	pre_increment();
	pos_increment();
	pre_decrement();
	pos_decrement();
}

/******************************************************************************/
/*END - Increment  / Decrement Operators test*/
/******************************************************************************/

/******************************************************************************/
/*BEGIN - arithmetic Operators test*/
/******************************************************************************/
void	arith_add(int vl_a, int vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	Fixed result = a + b;
	std::cout << "Arithmetic Operator Add (+) called. So... a + b = " << result.toInt() << std::endl;
}
void	arith_sub(float vl_a, float vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	Fixed result = a - b;
	std::cout << "Arithmetic Operator Subtract (-) called. So... a - b = " << result.toFloat() << std::endl;
}
void	arith_mult(float vl_a, float vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	Fixed result = a * b;
	std::cout << "Arithmetic Operator Multiplication (*) called. So... a * b = " << result.toFloat() << std::endl;
}
void	arith_div(float vl_a, float vl_b) {
	Fixed a(vl_a);
	Fixed b(vl_b);

	std::cout << "Value a: " << a << ". Value of b: " << b << std::endl;
	Fixed result = a / b;
	std::cout << "Arithmetic Operator Division (/) called. So... a / b = " << result.toFloat() << std::endl;
}

void	arithmetic_test(void) {
	std::cout << "\t**** Arithmetic Comparison test ****" << std::endl;

	arith_add(20, 10);
	arith_sub(42.5f, 2.5f);
	arith_mult(5, 2);
	arith_div(100, 2);
}

/******************************************************************************/
/*END - arithmetic Operators test*/
/******************************************************************************/

/******************************************************************************/
/*BEGIN - comparison Operators test*/
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
	std::cout << "\t**** Comparison Operator test ****" << std::endl;

	comp_greater(42.5f, 0);
	comp_less(42.5f, 50);
	comp_less_equal(42.5f, 50);
	comp_greater_equal(42.5f, 42.5f);
	comp_equal(5, 5);
	comp_diff(9, 12);
}
/******************************************************************************/
/*END - comparison Operators test*/
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
