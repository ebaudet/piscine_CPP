/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:57:07 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int 	main()
{
	Bureaucrat	buretin("buretin tintamarre rabou de la ficelle", 140);
	Form *		form;
	int			i;

	form = new ShrubberyCreationForm("Fraise");
	buretin.executeForm(*form);
	buretin.signForm(*form);
	buretin.executeForm(*form);
	buretin.setGrade(1);
	buretin.executeForm(*form);
	delete form;

	form = new RobotomyRequestForm("Pere castor");
	buretin.signForm(*form);
	for (i=0; i < 10; i++)
		buretin.executeForm(*form);
	delete form;

	form = new PresidentialPardonForm("Sirop de Menthe");
	buretin.signForm(*form);
	buretin.executeForm(*form);
	delete form;

	return 0;
}
