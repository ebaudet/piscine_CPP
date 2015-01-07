/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 03:58:42 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 06:00:28 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	return ;
}

std::string		Zombie::getType() {
	return this->_type;
}

void			Zombie::setType(std::string type) {
	this->_type = type;
}

std::string		Zombie::getName() {
	return this->_name;
}

void			Zombie::setName(std::string name) {
	this->_name = name;
}

void			Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
