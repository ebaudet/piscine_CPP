/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 18:27:40 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 01:29:37 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

/* CORE */
FragTrap::FragTrap(void) {
	std::cout << "Hey !! It's me, Mario !" << std::endl;

	return ;
}
FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	return ;
}
FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
									   _energyPoints(100), _maxEnergyPoints(100), _level(1),
									   _meleeAttackDamage(30), _rangedAttackDamage(20),
									   _armorDamageReduction(5)
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
void	FragTrap::takeDamage(unsigned int amount) {
	unsigned int damage;

	if (amount < this->_armorDamageReduction)
		damage = 0;
	else
		damage = amount - this->_armorDamageReduction;
	if (this->_hitPoints < damage)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= damage;

	std::cout << "You take " << damage << " damages" << std::endl;

	return ;
}
void	FragTrap::beRepaired(unsigned int amount) {
	unsigned int	repaire;

	if (this->_maxHitPoints == this->_hitPoints)
		repaire = 0;
	else if (amount > (this->_maxHitPoints - this->_hitPoints))
		repaire = this->_maxHitPoints - this->_hitPoints;
	else
		repaire = amount;
	std::cout << (this->_maxHitPoints - this->_hitPoints) << std::endl;

	this->_hitPoints += repaire;

	std::cout << "You repaire " << repaire << " points of life" << std::endl;

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
void	FragTrap::notice() const {
	std::cout << this->getName() << " a " << this->getHitPoints() << "/";
	std::cout << this->getMaxHitPoints() << std::endl;
}

/* Accessors */
unsigned int	FragTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int	FragTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
unsigned int	FragTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int	FragTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
unsigned int	FragTrap::getLevel(void) const {
	return (this->_level);
}
std::string FragTrap::getName(void) const {
	return (this->_name);
}
unsigned int	FragTrap::getMeleeAttackDamage(void) const {
	return (this->_meleeAttackDamage);
}
unsigned int	FragTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}
unsigned int	FragTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/* Mutators */
bool	FragTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
	return (true);
}
bool	FragTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	this->_maxHitPoints = maxHitPoints;
	return (true);
}
bool	FragTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
	return (true);
}
bool	FragTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	this->_maxEnergyPoints = maxEnergyPoints;
	return (true);
}
bool	FragTrap::setLevel(unsigned int level) {
	this->_level = level;
	return (true);
}
bool	FragTrap::setName(std::string name) {
	this->_name = name;
	return (true);
}
bool	FragTrap::setMeleeAttackDamage(unsigned int meleeAttackDamage) {
	this->_meleeAttackDamage = meleeAttackDamage;
	return (true);
}
bool	FragTrap::setRangedAttackDamage(unsigned int rangedAttackDamage) {
	this->_rangedAttackDamage = rangedAttackDamage;
	return (true);
}
bool	FragTrap::setArmorDamageReduction(unsigned int armorDamageReduction) {
	this->_armorDamageReduction = armorDamageReduction;
	return (true);
}

/* Operator Overload */
FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	
	return (*this);
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs) {
	o << rhs.getName();
	return o;
}

int			FragTrap::random() {
	if (!FragTrap::_rand)
	{
		std::srand(std::time(NULL));
		FragTrap::_rand = true;
	}
	return std::rand();
}

bool		FragTrap::_rand = false;
