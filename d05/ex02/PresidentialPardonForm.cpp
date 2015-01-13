/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 03:49:46 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:15:49 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***********************************************
	Constructors // Destructors
************************************************/
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "target") {
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &instance) : Form(instance)
{
	this->_sign = false;
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5, target) {
	return ;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	this->Form::operator=(rhs);
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

/***********************************************
	member functions
************************************************/
void		PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	try {
		executor.canExecute(*this);
		std::cout << executor.getName() << " executes " << this->_name << "." << std::endl;
		std::cout << "Zafod Beeblebrox, president of the Universe, officialy forgives " << this->_target << "." << std::endl;

	} catch (Form::GradeTooLowException &e) {
		std::cout << *this << " cannot make execution " << std::endl;
	}
}
