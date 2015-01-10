/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 20:41:00 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/08 02:25:36 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"

// constructors & destructor
Fixed::Fixed(void) : _rawBits(0), _nbBits(8) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const fixed) : _rawBits(0), _nbBits(8) {
	std::cout << "Int constructor called" << std::endl;

	this->_rawBits = fixed << this->_nbBits;
	return ;
}

Fixed::Fixed(float const fixed) : _rawBits(0), _nbBits(8) {
	std::cout << "Float constructor called" << std::endl;

	this->_rawBits = roundf(fixed * pow(2, (this->_nbBits)));
	return ;
}

Fixed::Fixed(Fixed const &src) : _rawBits(0), _nbBits(8) {
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// member function
int		Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits * pow(2, -(this->_nbBits)));
}

int		Fixed::toInt(void) const
{
	return this->_rawBits >> this->_nbBits;
}

// surcharge operator
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_rawBits = rhs.getRawBits();

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}
