/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 01:24:23 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 03:17:25 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "mutantstack.hpp"
/***********************************************
	Constructors // Destructors
************************************************/
template<typename T>
MutantStack<T>::MutantStack() {
	return ;
}
template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &instance) : std::stack<T>(instance){
	*this = instance;
}
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const &rhs) {
	std::stack<T>::operator=(rhs);
	return *this;
}
template<typename T>
MutantStack<T>::~MutantStack() {
	return ;
}

/***********************************************
	Constructors // Destructors pour MutantStack::iterator
************************************************/
template<typename T>
MutantStack<T>::iterator::iterator(void) : std::iterator<std::input_iterator_tag, int>() {
	return ;
}
template<typename T>
MutantStack<T>::iterator::iterator(int *x) : p(x) {
	return ;
}
template<typename T>
MutantStack<T>::iterator::iterator(MutantStack<T>::iterator const &instance) : p(instance.p) {
	*this = instance;
	return ;
}
template<typename T>
MutantStack<T>::iterator::~iterator() {
	return ;
}

/***********************************************
	overload operators pour MutantStack::iterator
************************************************/
template<typename T>
typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator++(void) {
	++(this->p);
	return *this;
}
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(int) {
	MutantStack<T>::iterator tmp(*this);
	operator++();
	return tmp;
}
template<typename T>
typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator--(void) {
	--(this->p);
	return *this;
}
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int) {
	MutantStack<T>::iterator tmp(*this);
	operator--();
	return tmp;
}
template<typename T>
bool		MutantStack<T>::iterator::operator==(const MutantStack<T>::iterator& rhs) {
	return this->p==rhs.p;
}
template<typename T>
bool		MutantStack<T>::iterator::operator!=(const MutantStack<T>::iterator& rhs) {
	return this->p!=rhs.p;
}
template<typename T>
int&		MutantStack<T>::iterator::operator*(void) {
	return *(this->p);
}

/***********************************************
	member function pour MutantStack::iterator
************************************************/
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void) {
	T		*start = &(this->top());

	start -= (this->size() - 1);
	iterator	it;
	it.p = start;
	return it;
}
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void) {
	T			*end = &(this->top()) + 1;
	iterator	it;

	it.p = end;
	return it;
}
