/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 03:49:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:52:06 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <stdlib.h>
#include <time.h>

/***********************************************
	Constructors // Destructors
************************************************/
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "target") {
	srand(time(NULL));
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &instance) : Form(instance)
{
	this->_sign = false;
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45, target) {
	return ;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	this->Form::operator=(rhs);
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

/***********************************************
	member functions
************************************************/
void		RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	try {
		executor.canExecute(*this);
		std::cout << executor.getName() << " executes " << this->_name << "." << std::endl;
		std::cout << "\a * BRUIT ASSOURDISSANT * " << std::endl;
		if (rand() % 2)
			std::cout << this->_target << "'s robotomy was a success!" << std::endl;
		else
			std::cout << "La robotomy de " << this->_target << " n'a pas fonction. On retente ? :) " << std::endl;

	} catch (Form::GradeTooLowException &e) {
		std::cout << *this << " cannot make execution " << std::endl;
	}
}
