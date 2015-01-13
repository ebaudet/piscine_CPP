/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 06:35:04 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:48:24 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {
	return ;
}

Intern::~Intern() {
	return ;
}

Form * Intern::makeForm(std::string const form, std::string const target) {

	Form *	rform;

	if (form == "presidential pardon")
		rform = new PresidentialPardonForm(target);
	else if (form == "robotomy request")
		rform = new RobotomyRequestForm(target);
	else if (form == "shrubbery creation")
		rform = new ShrubberyCreationForm(target);
	else
	{
		std::cout << form << ": Pas vu, pas pris." << std::endl;

		std::cout << "Bon chance. Le \"" << form << "\" pour " << target << " est parti en courant.. Retourne-toi, il y est peut etre encore. Ha. Ha. Ha." <<std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << rform->getName() << "." << std::endl;
	return rform;
}
