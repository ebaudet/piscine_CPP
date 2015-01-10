/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 02:38:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/10 04:16:29 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Victim.hpp"

/* CORE */
Victim::Victim(void) {
	std::cout << "Some random victim called " << this->getName() << " just popped !" << std::endl;
	return ;
}
Victim::Victim(Victim const &src) {
	std::cout << "Some random victim called " << this->getName() << " just popped !" << std::endl;
	*this = src;
	return ;
}
Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->getName() << " just popped !" << std::endl;
	return ;
}
Victim::~Victim(void) {
	std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
	return ;
}

/* Method */
void	Victim::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

/* Accessors */
std::string Victim::getName(void) const {
	return (this->_name);
}

/* Mutators */
bool Victim::setName(std::string name) {
	this->_name = name;
	return (true);
}

/* Operator Overload */
Victim &Victim::operator=(Victim const &rhs) {
	this->_name = rhs.getName();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	o << "I'm " << rhs.getName() << " and i like otters !" << std::endl;
	return o;
}
