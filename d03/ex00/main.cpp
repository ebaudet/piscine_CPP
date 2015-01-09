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

int main(void)
{
	FragTrap *robot = new FragTrap("ClapTrap");

	robot->rangedAttack("Coucou");
	robot->meleeAttack("Coucou");
	robot->takeDamage(2);
	robot->notice();

	robot->beRepaired(78);
	robot->notice();

	robot->takeDamage(20);
	robot->notice();

	robot->vaulthunter_dot_exe("Coucou");
	robot->vaulthunter_dot_exe("Coucou");
	robot->vaulthunter_dot_exe("Coucou");

	robot->beRepaired(6);
	robot->notice();
	robot->takeDamage(20);
	robot->notice();
	robot->vaulthunter_dot_exe("Coucou");
	robot->vaulthunter_dot_exe("Coucou");
	robot->vaulthunter_dot_exe("Coucou");

	robot->beRepaired(20);
	robot->notice();

	delete robot;
	return 0;
}
