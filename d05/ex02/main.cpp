/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:25:02 by ebaudet          ###   ########.fr       */
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
	Bureaucrat	bob("Bobby the Creator", 140);
	Form *		form;
	int			i;

	form = new ShrubberyCreationForm("Laponie");
	bob.executeForm(*form);
	bob.signForm(*form);
	bob.executeForm(*form);
	bob.setGrade(1);
	bob.executeForm(*form);
	delete form;

	form = new RobotomyRequestForm("Olive et Tom");
	bob.signForm(*form);
	for (i=0; i < 10; i++)
		bob.executeForm(*form);
	delete form;

	form = new PresidentialPardonForm("Dieudonné");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete form;

	return 0;
}
