/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 20:43:06 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/08 05:28:01 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int main( void ) {

	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c;

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	// test complet :

	std::cout << "Fixed( 5.05f ) : " << Fixed( 5.05f ) << ", Fixed( 2 ) : " << Fixed( 2 ) << std::endl;

	std::cout << "  a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "  a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "  a : " << a << std::endl;

	if (a == a)
		std::cout << "a == a" << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	if (a > b)
		std::cout << "a > b" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;

	std::cout << "  b : " << b << std::endl;

	std::cout << "Fixed::max( a, b ) : " << Fixed::max( a, b ) << std::endl;
	c = a + b;
	std::cout << "c = a + b : " << c << std::endl;
	c = c - 2;
	std::cout << "c = c - 2 : " << c << std::endl;
	c = c * 2;
	std::cout << "c = c * 2 : " << c << std::endl;
	c = c / 3;
	std::cout << "c = c / 3 : " << c << std::endl;

	return 0;
}