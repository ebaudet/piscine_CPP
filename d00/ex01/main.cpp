/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:07:25 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/05 22:27:29 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		main(void)
{
	std::string		buff;
	Contact			contactList[8];
	int 			idChose;

	std::cout << "Hello, welcome to phonebook, the commands are ADD, SEARCH, and EXIT." << std::endl;
	while(buff.compare("EXIT") != 0)
	{
		std::cout << "> What do you want to do ?" << std::endl;
		std::cin >> buff;
		if (buff.compare("ADD") == 0)
		{
			if (Contact::getNbContact() >= 8)
			{
				std::cout << "/!\\ No more places. You can only add 8 contacts. #Dommage" << std::endl;
			}
			else
			{
				contactList[Contact::getNbContact()].initContact();
			}
		}
		else if (buff.compare("SEARCH") == 0)
		{
			for(int i = 0; i < Contact::getNbContact(); i++)
			{
				contactList[i].printShortContact();
			}
			if (Contact::getNbContact() > 0)
			{
				std::cout << "> Chose the contact you want to show (ID)" << std::endl;
				std::cin >> idChose;
	
				if (std::cin.good() && idChose >= 0 && idChose < Contact::getNbContact())
				{
					contactList[idChose].printContact();
				}
				else
				{
					std::cin.clear();
					std::cout << "/!\\ wrong entry, try again #FAIL" << std::endl;
				}

			}
		}
		else if (buff.compare("EXIT") != 0)
		{
			std::cout << "/!\\ wrong entry, try again #FAIL" << std::endl;
		}
	}
	std::cout << "Thanks for using phonebook, HAVE A NICE DAY :-)" << std::endl;

	return (0);
}
