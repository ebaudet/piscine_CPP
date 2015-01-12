/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 21:58:36 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/12 23:32:52 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/***********************************************
	Constructors // Destructors
************************************************/
Form::Form() : _name("no_name"), _gradeToSign(150), _gradeToExecute(1) {
	return ;
}
Form::Form(Form const &instance) : _name(instance.getName()), _gradeToSign(instance.getGradeToSign()), _gradeToExecute(instance.getGradeToExecute())
{
	this->_sign = true;
	return ;
}
Form& Form::operator=(Form const &rhs) {
	this->setSign(rhs.getSign());
	return *this;
}
Form::~Form() {
	return ;
}

int			Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}
int			Form::getGradeToExecute(void) const {
	return this->_gradeToExecute;
}
std::string	Form::getName(void) const {
	return this->_name;
}
bool		Form::getSign(void) const {
	return this->_sign;
}
bool		Form::setSign(bool sign) {
	this->_sign = sign;

	return true;
}

/***********************************************
	Exception Form::GradeTooHighException
************************************************/
Form::GradeTooHighException::GradeTooHighException() throw() {
	return ;
}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &instance) throw() {
	*this = instance;
	return ;
}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const &rhs) throw() {
	this->std::exception::operator=(rhs);
	return *this;
}
Form::GradeTooHighException::~GradeTooHighException() throw() {
	return ;
}
const  char* Form::GradeTooHighException::what() const throw() {
	return ("Exeption Form::GradeTooHighException");
}


/***********************************************
	Exception Form::GradeTooLowException
************************************************/
Form::GradeTooLowException::GradeTooLowException() throw() {
	return ;
}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &instance) throw() {
	*this = instance;
	return ;
}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const &rhs) throw() {
	this->std::exception::operator=(rhs);
	return *this;
}
Form::GradeTooLowException::~GradeTooLowException() throw() {
	return ;
}
const  char* Form::GradeTooLowException::what() const throw() {
	return ("Exeption Form::GradeTooLowException");
}

// Overload operator <<
std::ostream &operator<<(std::ostream &o, const Form& rhs) {
	o << rhs.getName() << ", form grade " << rhs.getGradeToSign() << ".";
	return o;
}
