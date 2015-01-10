/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 02:38:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/10 04:25:49 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/* CORE */
Sorcerer::Sorcerer(void) {
	std::cout << this->getName() << ", " << this->getTitle() << ", is born !" << std::endl;
	return ;
}
Sorcerer::Sorcerer(Sorcerer const &src) {
	std::cout << this->getName() << ", " << this->getTitle() << ", is born !" << std::endl;
	*this = src;
	return ;
}
Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is born !" << std::endl;
	return ;
}
Sorcerer::~Sorcerer(void) {
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

/* member function */
void	Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

/* Accessors */
std::string Sorcerer::getName(void) const {
	return (this->_name);
}
std::string Sorcerer::getTitle(void) const {
	return (this->_title);
}

/* Mutators */
bool Sorcerer::setName(std::string name) {
	this->_name = name;
	return (true);
}
bool Sorcerer::setTitle(std::string title) {
	this->_title = title;
	return (true);
}

/* Operator Overload */
Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
