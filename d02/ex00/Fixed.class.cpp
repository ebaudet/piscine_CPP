/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 18:19:41 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/08 02:25:08 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

// constructors & destructor
Fixed::Fixed(void) : _rawBits(0), _nbBits(8) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) : _nbBits(8) {
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;

	return ;
}

// member function
int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;

	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
	return ;
}

// surcharge operator
Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Assignation operator called" << std::endl;

	this->_rawBits = rhs.getRawBits();

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.getRawBits();
	return o;
}