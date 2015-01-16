/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 21:44:26 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 01:09:10 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/***********************************************
	Constructors // Destructors
************************************************/
Span::Span(void) : _size(0)
{
	return ;
}
Span::Span(unsigned int const size) : _size(size) {
	return ;
}
Span::Span(Span const &instance)
{
	*this = instance;
	return ;
}
Span& Span::operator=(Span const &rhs)
{
	if (this == &rhs)
		return *this;
	this->_container = rhs.getContainer();
	this->_size = rhs.getSize();
	return *this;
}
Span::~Span(void)
{
	return ;
}

/***********************************************
	Getters & Setters
************************************************/
unsigned int		Span::getSize(void) const {
	return this->_size;
}
std::vector<int>	Span::getContainer(void) const {
	return this->_container;
}

/***********************************************
	member functions
************************************************/
void	Span::addNumber(int const n) {
	if (this->_container.size() < this->_size)
		this->_container.insert(this->_container.end(), 1, n);
	else
		throw std::exception();
}
int		Span::shortestSpan(void) {
	if (this->_container.size() < 2)
		throw std::exception();

	std::vector<int>	copy_container;
	int					tmp;

	copy_container = this->_container;

	std::sort(copy_container.begin(), copy_container.end());
	
	tmp = Span::abs_diff(copy_container[0], copy_container[1]);
	for (unsigned int i = 1; i < copy_container.size(); i++)
	{
		if (Span::abs_diff(copy_container[i - 1], copy_container[i]) < tmp)
			tmp = Span::abs_diff(copy_container[i - 1], copy_container[i]);
	}
	return tmp;
}
int		Span::longestSpan(void) {
	if (this->_container.size() < 2)
		throw std::exception();

	std::vector<int>	copy_container;

	copy_container = this->_container;
	std::sort(copy_container.begin(), copy_container.end());
	return (Span::abs_diff(copy_container[0], copy_container[copy_container.size() - 1]));
	
}

/***********************************************
	private functions
************************************************/
int				Span::abs_diff(int const a, int const b) {
	int		result;

	result = b - a;
	return ( result < 0 ? -result : result );
}
