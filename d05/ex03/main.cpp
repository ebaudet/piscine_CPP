/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:49:02 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int	main() {
	Form *			form;
	Intern			bob;
	Bureaucrat		buretin("buretin", 1);

	form = bob.makeForm("Il etait une fois la Form", "Chocapics");
	std::cout << buretin << std::endl;
	form = bob.makeForm("presidential pardon", "Douglas Adams");
	buretin.signForm(*form);
	buretin.executeForm(*form);
	delete form;

	form = bob.makeForm("robotomy request", "Cyril Hanouna");
	buretin.signForm(*form);
	buretin.executeForm(*form);
	delete form;

	form = bob.makeForm("shrubbery creation", "JCVD");
	buretin.signForm(*form);
	buretin.executeForm(*form);
	delete form;

	return 0;
}