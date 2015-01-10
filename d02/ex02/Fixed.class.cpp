/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 20:41:00 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/08 05:29:53 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"


// -----constructors & destructor------
Fixed::Fixed(void) : _rawBits(0), _nbBits(8) {
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const fixed) : _nbBits(8) {
	// std::cout << "Int constructor called" << std::endl;

	this->_rawBits = fixed << this->_nbBits;
	return ;
}

Fixed::Fixed(float const fixed) : _nbBits(8) {
	// std::cout << "Float constructor called" << std::endl;

	this->_rawBits = roundf(fixed * pow(2, (this->_nbBits)));
	return ;
}

Fixed::Fixed(Fixed const &src) : _nbBits(8) {
	// std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

// -----member function-----
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

// -----surcharge operator-----
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_rawBits = rhs.getRawBits();

	return *this;
}

Fixed	Fixed::operator+(Fixed const &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}
// ++i
Fixed	&Fixed::operator++ () {
	this->_rawBits += 1;
	return *this;
}
// i++
Fixed	Fixed::operator++ (int) {
	Fixed	var(*this);
	++(*this);
	return var;
}
// --i
Fixed	&Fixed::operator-- () {
	this->_rawBits -= 1;
	return *this;
}
// i--
Fixed	Fixed::operator-- (int) {
	Fixed	var(*this);
	--(*this);
	return var;
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator> (Fixed const &f) const {
	return (this->toFloat() > f.toFloat());
}
bool	Fixed::operator< (Fixed const &f) const {
	return (this->toFloat() < f.toFloat());
}
bool	Fixed::operator<= (Fixed const &f) const {
	return (this->toFloat() <= f.toFloat());
}
bool	Fixed::operator>= (Fixed const &f) const {
	return (this->toFloat() >= f.toFloat());
}
bool	Fixed::operator== (Fixed const &f) const {
	return (this->toFloat() == f.toFloat());
}
bool	Fixed::operator!= (Fixed const &f) const {
	return (this->toFloat() != f.toFloat());
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}

// -----non member function-----
Fixed 	Fixed::min(Fixed f1, Fixed f2) {
	if (f1 > f2)
		return f1;
	else
		return f2;
}
Fixed 	Fixed::max(Fixed f1, Fixed f2) {
	if (f1 > f2)
		return f1;
	else
		return f2;
}

