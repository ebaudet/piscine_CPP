/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 03:58:56 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 04:14:24 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <ctime>
#include <cstdlib>

/* CORE */
NinjaTrap::NinjaTrap(void) : ClapTrap() {
	std::cout << "Hey !! It's me, Mario the ninja !" << std::endl;

	return ;
}
NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src) {
	*this = src;
	return ;
}
NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "Hey !! I'm  " << this->getName() << " !! the ninja :)" << std::endl;

	return ;
}
NinjaTrap::~NinjaTrap(void) {
	std::cout << "I'm a the ninja ! I always disapears" << std::endl;

	return ;
}

/* Methodes */
void	NinjaTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP, the ninja " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;

	return ;
}
void	NinjaTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP, the ninja " << this->_name << " attacks " << target;
	std::cout << " with melee attack, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}
void	NinjaTrap::ninjaShoebox(ClapTrap const & target) {
	std::cout << this->getName() << " try to attack the ClapTrap " << target << std::endl;
}
void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	std::cout << this->getName() << " try to attack the NinjaTrap " << target << std::endl;
}
void	NinjaTrap::ninjaShoebox(FragTrap const & target) {
	std::cout << this->getName() << " try to attack the FragTrap " << target << std::endl;
}
void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	std::cout << this->getName() << " try to attack the ScavTrap " << target << std::endl;
}

std::ostream & operator<<(std::ostream & o, NinjaTrap const & rhs) {
	o << rhs.getName();
	return o;
}