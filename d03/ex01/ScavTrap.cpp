/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 01:26:14 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 01:56:03 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>
#include <cstdlib>

/* CORE */
ScavTrap::ScavTrap(void) {
	std::cout << "Hey !! It's me, ScavTrap !" << std::endl;

	return ;
}
ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
	return ;
}
ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
									   _energyPoints(50), _maxEnergyPoints(100), _level(1),
									   _meleeAttackDamage(20), _rangedAttackDamage(15),
									   _armorDamageReduction(3)
{
	std::cout << "Hey !! I'm  " << this->getName() << ", the ScavTrap !! :)" << std::endl;

	return ;
}
ScavTrap::~ScavTrap(void) {
	std::cout << "Noooo too weak !! I'll come back and ... arf." << std::endl;

	return ;
}

/* Methodes */
void	ScavTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;

	return ;
}
void	ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " with melee attack, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}
void	ScavTrap::takeDamage(unsigned int amount) {
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
void	ScavTrap::beRepaired(unsigned int amount) {
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
void	ScavTrap::challengeNewcomer(std::string const & target) {
	std::string	challenge[] = 
	{"Order a pizza 3 minutes before new year and when it comes say 'I ordered this a darn year ago' and scream in frustration.",
	"Go into a phone store, look at the sales person, hold out a bananna and tell them you want to upgrade to an apple.",
	"Go to Ikea and hide in a cabinet, when someone opens it up say 'welcome to Narnia.'",
	"Look at see through glass and when someone is on the other side shout 'OH MY GOD, I'M HIDEOUS!'",
	"Call someone to tell them you can't talk right now.",
	"Buy a donut and complain that there's a hole in it.",
	"Point at someone and shout 'You're one of them!' Run and pretend to trip. Crawl away slowly.",
	"Bring a big chair into the elevator facing away from the door and when someone walks in, dramatically turn and say 'we've been expecting you.'",
	"Call McDonalds asking for directions to Burger King.",
	"Go into a public restroom then after a few seconds, yell 'LET IT GO! LET IT GO! CAN'T HOLD IT BACK ANYMORE!' then drop something heavy into the toilet.",
	"Put Mayonnaise in a bowl, freeze it, and tell your friend it's ice cream.",
	"When in a toilet block, start screaming 'I wanna scream and shout and let it all out' and then drop something heavy into the toilet.",
	"In a public toilet, pass a note under the door next to you saying, 'They're onto us. We need to go.'",
	"Order a pizza 5 minutes before New Years, and when it comes, yell, 'I ORDERED THIS THING A YEAR AGO!'",
	"Put up a 'Lost Dog' poster with a picture of a cat on it.",
	"Throw Skittles at a random person and scream TASTE THE RAINBOW!!!!",
	"Call Pizza Hut and ask for the phone number to Domino's.",
	"Go to an electronic store with a banana and say that you want to upgrade to an apple.",
	"Dress up as a duck and throw bread at people and say,'HOW DO YOU LIKE IT?!! HUH?!!!!'",
	"Call Pizza Hut and ask them for domino's number."};

	std::cout << *this << " challenge " << target << " to : " << std::endl << challenge[ScavTrap::random() % 20] << std::endl;
}
void	ScavTrap::notice() const {
	std::cout << this->getName() << " a " << this->getHitPoints() << "/";
	std::cout << this->getMaxHitPoints() << std::endl;
}

/* Accessors */
unsigned int	ScavTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int	ScavTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
unsigned int	ScavTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int	ScavTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
unsigned int	ScavTrap::getLevel(void) const {
	return (this->_level);
}
std::string ScavTrap::getName(void) const {
	return (this->_name);
}
unsigned int	ScavTrap::getMeleeAttackDamage(void) const {
	return (this->_meleeAttackDamage);
}
unsigned int	ScavTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}
unsigned int	ScavTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/* Mutators */
bool	ScavTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
	return (true);
}
bool	ScavTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	this->_maxHitPoints = maxHitPoints;
	return (true);
}
bool	ScavTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
	return (true);
}
bool	ScavTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	this->_maxEnergyPoints = maxEnergyPoints;
	return (true);
}
bool	ScavTrap::setLevel(unsigned int level) {
	this->_level = level;
	return (true);
}
bool	ScavTrap::setName(std::string name) {
	this->_name = name;
	return (true);
}
bool	ScavTrap::setMeleeAttackDamage(unsigned int meleeAttackDamage) {
	this->_meleeAttackDamage = meleeAttackDamage;
	return (true);
}
bool	ScavTrap::setRangedAttackDamage(unsigned int rangedAttackDamage) {
	this->_rangedAttackDamage = rangedAttackDamage;
	return (true);
}
bool	ScavTrap::setArmorDamageReduction(unsigned int armorDamageReduction) {
	this->_armorDamageReduction = armorDamageReduction;
	return (true);
}

/* Operator Overload */
ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
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

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs) {
	o << rhs.getName();
	return o;
}

int			ScavTrap::random() {
	if (!ScavTrap::_rand)
	{
		std::srand(std::time(NULL));
		ScavTrap::_rand = true;
	}
	return std::rand();
}

bool		ScavTrap::_rand = false;
