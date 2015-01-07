/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 03:58:42 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 04:54:16 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}


void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie 			*ZombieEvent::newZombie(std::string name)
{
	Zombie		*zombie = new Zombie();

	zombie->setName(name);
	zombie->setType(this->_type);

	return zombie;
}
