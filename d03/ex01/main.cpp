// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ebaudet <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 18:24:01 by ebaudet           #+#    #+#             //
//   Updated: 2015/01/09 00:04:26 by ebaudet          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap fragTrap = FragTrap("FragTrap");

	fragTrap.rangedAttack("Coucou");
	fragTrap.meleeAttack("Coucou");
	fragTrap.takeDamage(2);
	fragTrap.notice();

	fragTrap.beRepaired(78);
	fragTrap.notice();

	fragTrap.takeDamage(20);
	fragTrap.notice();

	fragTrap.vaulthunter_dot_exe("Coucou");
	fragTrap.vaulthunter_dot_exe("Coucou");
	fragTrap.vaulthunter_dot_exe("Coucou");

	fragTrap.beRepaired(6);
	fragTrap.notice();
	fragTrap.takeDamage(20);
	fragTrap.notice();
	fragTrap.vaulthunter_dot_exe("Coucou");
	fragTrap.vaulthunter_dot_exe("Coucou");
	fragTrap.vaulthunter_dot_exe("Coucou");

	fragTrap.beRepaired(20);
	fragTrap.notice();

	std::cout << std::endl << std::endl << "**************** arrivee de scavTrap *************" << std::endl << std::endl;
	ScavTrap scavTrap = ScavTrap("ScavTrap");

	scavTrap.rangedAttack("Coucou");
	scavTrap.meleeAttack("Coucou");
	scavTrap.takeDamage(2);
	scavTrap.notice();

	scavTrap.beRepaired(78);
	scavTrap.notice();

	scavTrap.takeDamage(20);
	scavTrap.notice();

	scavTrap.challengeNewcomer("Coucou");
	scavTrap.challengeNewcomer("Coucou");
	scavTrap.challengeNewcomer("Coucou");

	scavTrap.beRepaired(6);
	scavTrap.notice();
	scavTrap.takeDamage(20);
	scavTrap.notice();
	scavTrap.challengeNewcomer("Coucou");
	scavTrap.challengeNewcomer("Coucou");
	scavTrap.challengeNewcomer("Coucou");

	scavTrap.beRepaired(20);
	scavTrap.notice();

	return 0;
}
