/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 03:04:22 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int 	main()
{
	try {
		Form form("Formulaire 1", 120, 120);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Formulaire 1" << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Formulaire 1" << e.what() << std::endl;
	}

	try {
		Form form("Formulaire 2", 15, 0);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Formulaire 2" << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Formulaire 2" << e.what() << std::endl;
	}

	try {
		Form form("Formulaire 3", 13, 350);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Formulaire 3" << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Formulaire 3" << e.what() << std::endl;
	}

	Form form("Formulaire 3", 13, 16);
	Bureaucrat bur1("Jacques", 40);
	Bureaucrat bur2("Sylvain", 3);

	bur1.signForm(form);
	bur2.signForm(form);

	return 0;
}
