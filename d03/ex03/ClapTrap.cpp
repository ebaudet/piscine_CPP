/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:12:07 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 05:48:06 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ctime>
#include <cstdlib>

/* CORE */
ClapTrap::ClapTrap(void) : _name("no_name"), _hitPoints(100), _maxHitPoints(100),
							_energyPoints(100), _maxEnergyPoints(100), _level(1),
							_meleeAttackDamage(30), _rangedAttackDamage(20),
							_armorDamageReduction(5)
{
	std::cout << "Hey !! It's me, ClapTrap !" << std::endl;

	return ;
}
ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
	return ;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
									   _energyPoints(100), _maxEnergyPoints(100), _level(1),
									   _meleeAttackDamage(30), _rangedAttackDamage(20),
									   _armorDamageReduction(5)
{
	std::cout << "Hey !! I'm  " << this->getName() << ", the ClapTrap !! :)" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name,
	unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints,
	unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage,
	unsigned int rangedAttackDamage, unsigned int armorDamageReduction) : _name(name), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
									   _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _level(level),
									   _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage),
									   _armorDamageReduction(armorDamageReduction)
{
	return ;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "Like all ClapTrap, I just say good bye !" << std::endl;

	return ;
}

/* Methodes */
void	ClapTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;

	return ;
}
void	ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " with melee attack, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}
void	ClapTrap::takeDamage(unsigned int amount) {
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
void	ClapTrap::beRepaired(unsigned int amount) {
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
void	ClapTrap::notice() const {
	std::cout << this->getName() << " a " << this->getHitPoints() << "/";
	std::cout << this->getMaxHitPoints() << std::endl;
}

/* Accessors */
unsigned int	ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int	ClapTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
unsigned int	ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int	ClapTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
unsigned int	ClapTrap::getLevel(void) const {
	return (this->_level);
}
std::string ClapTrap::getName(void) const {
	return (this->_name);
}
unsigned int	ClapTrap::getMeleeAttackDamage(void) const {
	return (this->_meleeAttackDamage);
}
unsigned int	ClapTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}
unsigned int	ClapTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/* Mutators */
bool	ClapTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
	return (true);
}
bool	ClapTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	this->_maxHitPoints = maxHitPoints;
	return (true);
}
bool	ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
	return (true);
}
bool	ClapTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	this->_maxEnergyPoints = maxEnergyPoints;
	return (true);
}
bool	ClapTrap::setLevel(unsigned int level) {
	this->_level = level;
	return (true);
}
bool	ClapTrap::setName(std::string name) {
	this->_name = name;
	return (true);
}
bool	ClapTrap::setMeleeAttackDamage(unsigned int meleeAttackDamage) {
	this->_meleeAttackDamage = meleeAttackDamage;
	return (true);
}
bool	ClapTrap::setRangedAttackDamage(unsigned int rangedAttackDamage) {
	this->_rangedAttackDamage = rangedAttackDamage;
	return (true);
}
bool	ClapTrap::setArmorDamageReduction(unsigned int armorDamageReduction) {
	this->_armorDamageReduction = armorDamageReduction;
	return (true);
}

/* Operator Overload */
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
	o << rhs.getName();
	return o;
}

int			ClapTrap::random() {
	if (!ClapTrap::_rand)
	{
		std::srand(std::time(NULL));
		ClapTrap::_rand = true;
	}
	return std::rand();
}

bool		ClapTrap::_rand = false;
