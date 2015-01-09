/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 18:27:40 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 05:46:26 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

/* CORE */
FragTrap::FragTrap(void) : ClapTrap("no_name", 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << "Hey !! It's me, Mario !" << std::endl;

	return ;
}
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	*this = src;
	return ;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "Hey !! I'm  " << this->getName() << " !! :)" << std::endl;

	return ;
}
FragTrap::~FragTrap(void) {
	std::cout << "Ooh ..  ! What's a wonder..full day for .. aaaRR ..  dying ..." << std::endl;

	return ;
}

/* Methodes */
void	FragTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;

	return ;
}
void	FragTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " with melee attack, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}
void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string	nameAttack[] = {"a fire ball", "a freeze gun", "a electric sword"};

	if (this->getEnergyPoints() >= 25)
	{
		int			damage = (FragTrap::random() % 20) + this->getLevel();
		
		std::cout << this->getName() << " attack " << target;
		std::cout << " with " << nameAttack[FragTrap::random() % 3];
		std::cout << " and make " << damage << " damages" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 25);
	}
	else
	{
		std::cout << this->getName() << " try to attack " << target;
		std::cout << " with " << nameAttack[FragTrap::random() % 3];
		std::cout << " but he failed. Not enough energy.. MOUAHAHAHAHA !!" << std::endl;
	}
	
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs) {
	o << rhs.getName();
	return o;
}
