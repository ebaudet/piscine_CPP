/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/12 22:28:43 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("no_name"), _grade(150) {
	return;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	try {
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
		this->_grade = 1;

	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
		this->_grade = 150;
	}
}
Bureaucrat::Bureaucrat(Bureaucrat const &instance) {
	this->setGrade(instance.getGrade());
	return ;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->setGrade(rhs.getGrade());
	return *this;
}
Bureaucrat::~Bureaucrat() {
	return ;
}

bool		Bureaucrat::setGrade(int grade) {
	try {
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}

	return true;
}

int			Bureaucrat::getGrade(void) const {
	return this->_grade;
}
std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {
	return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &instance) throw() {
	*this = instance;
	return ;
}
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &rhs) throw()
{
	this->std::exception::operator=(rhs);
	return *this;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	return ;
}
const  char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {
	return ;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &instance) throw() {
	*this = instance;
	return ;
}
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &rhs) throw()
{
	this->std::exception::operator=(rhs);
	return *this;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	return ;
}
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}
std::ostream &operator<<(std::ostream &o, const Bureaucrat& rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
