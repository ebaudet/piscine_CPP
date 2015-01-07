/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 03:58:47 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 05:59:51 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

void		randomChump()
{
	ZombieEvent zEvent = ZombieEvent();
	int random = std::rand() % 20;
	std::string		tabName[] = {
		"Marthe", "Vespasien", "Esther", "Constant", "Armel",
		"Ruben", "Irene", "Placide", "Cecile", "Edwige", 
		"Josette", "Aglae", "Robert", "Benoite", "Hermine",
		"Nathalie", "Brice", "Eric", "Aurelie", "Melina" };
	zEvent.setZombieType("heap");
	
	Zombie	*zombieTest = zEvent.newZombie(tabName[random]);
	zombieTest->announce();
	delete zombieTest;
}

int		main(void)
{
	std::srand(std::time(NULL));

	std::cout << "- heap -" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		randomChump();
	}

	std::cout << "- stack -" << std::endl;

	Zombie stackZombie = Zombie();
	stackZombie.setType("stack");
	stackZombie.setName("francois");
	stackZombie.announce();

	return 0;
}