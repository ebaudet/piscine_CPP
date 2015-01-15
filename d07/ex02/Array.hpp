/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 00:18:40 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/15 01:12:27 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
public:
	Array <T>(void) : _size(0), _array(NULL) {};
	Array <T>(unsigned int n) : _size(n), _array(NULL) {
		this->_array = new T[n];
	};
	Array <T>(Array<T> const &src) {
		*this = src;
	};
	~Array <T>(void) {
		if (this->_array != NULL)
			delete [] this->_array;
	};

	Array& operator=(Array<T> const &rhs) {
		if (this == &rhs)
			return *this;

		if (this->_array != NULL)
			delete [] this->_array;

		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for (int i=0; i < this->_size; i++) {
			this->_array[i] = rhs[i];
		}
		return *this;
	};
	T 	&operator[](unsigned int i) {
		if (i > (this->_size - 1))
			throw std::exception();
		return this->_array[i];
	}

	// getters & setters
	unsigned int	size(void) const {return this->_size; }

private:
	unsigned int	_size;
	T				*_array;
	
};

#endif
