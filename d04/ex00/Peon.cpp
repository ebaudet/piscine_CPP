/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 02:38:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/10 04:29:35 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/* CORE */
Peon::Peon(void) : Victim() {
	std::cout << "Zog zog." << std::endl;
	return ;
}
Peon::Peon(Peon const &src) : Victim(src) {
	std::cout << "Zog zog." << std::endl;
	return ;
}
Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}
Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;;
	return ;
}

/* Method */
void	Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;;
}

/* Operator Overload */
Peon &Peon::operator=(Peon const &rhs) {
	this->_name = rhs.getName();
	return (*this);
}
