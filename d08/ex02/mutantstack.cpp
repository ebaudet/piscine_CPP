/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 01:24:23 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 02:23:56 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
/***********************************************
	Constructors // Destructors
************************************************/
template<typename T>
MutantStack<T>::MutantStack() {
	return ;
}
template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &instance) : std::stack<T>(instance){
	*this = src;
}
template<typename T>
MutantStack& MutantStack::operator=(MutantStack const &rhs) {
	std::stack<T>::operator=(rhs);
	return *this;
}
template<typename T>
MutantStack<T>::~MutantStack() {
	return ;
}

/***********************************************
	Exception MutantStack::iterator
************************************************/
MutantStack::iterator::iterator() {
	return ;
}
MutantStack::iterator::iterator(MutantStack::iterator const &instance) {
	*this = instance;
	return ;
}
MutantStack::iterator& MutantStack::iterator::operator=(MutantStack::iterator const &rhs) {
	this->std::exception::operator=(rhs);
	return *this;
}
MutantStack::iterator::~iterator() {
	return ;
}
