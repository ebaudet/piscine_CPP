/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 01:26:14 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 05:49:36 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>
#include <cstdlib>

/* CORE */
ScavTrap::ScavTrap(void) : ClapTrap("no_name", 100, 100, 50, 100, 1, 20, 15, 3) {
	std::cout << "Hey !! It's me, ScavTrap !" << std::endl;

	return ;
}
ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	*this = src;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 100, 1, 20, 15, 3)
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
	std::cout << "FR4G-TP. The ScavTrap " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;

	return ;
}
void	ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP. The ScavTrap " << this->_name << " attacks " << target;
	std::cout << " with melee attack, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
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

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs) {
	o << rhs.getName();
	return o;
}
