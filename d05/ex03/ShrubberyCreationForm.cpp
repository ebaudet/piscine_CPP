/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 03:49:10 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:29:51 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/***********************************************
	Constructors // Destructors
************************************************/
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "target") {
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &instance) : Form(instance)
{
	this->_sign = false;
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137, target) {
	return ;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	this->Form::operator=(rhs);
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

/***********************************************
	member functions
************************************************/
void		ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	try {
		std::string	str = this->_target;
		str.append("_shrubbery");
		std::ofstream	ofs(str.c_str());
		executor.canExecute(*this);
		std::cout << executor.getName() << " executes " << this->_name << "." << std::endl;
		ofs << "                                                         .			" << std::endl;
		ofs << "                                              .         ;  			" << std::endl;
		ofs << "                 .              .              ;%%     ;;   		" << std::endl;
		ofs << "                   ,           ,                :;%  %;   			" << std::endl;
		ofs << "                    :         ;                   :;%%;'     .,   	" << std::endl;
		ofs << "           ,.        %%;     %%;            ;        %%;'    ,;		" << std::endl;
		ofs << "             ;       ;%%;  %%;        ,     %%;    ;%%;    ,%%'		" << std::endl;
		ofs << "              %%;       %;%;      ,  ;       %%;  ;%%;   ,%%;' 		" << std::endl;
		ofs << "               ;%%;      %%;        ;%%;        % ;%;  ,%%;'		" << std::endl;
		ofs << "                `%%;.     ;%%;     %%;'         `;%%%%;.%%;'		" << std::endl;
		ofs << "                 `:;%%.    ;%%. %%@;        %%; ;@%;%'				" << std::endl;
		ofs << "                    `:%%;.  :;bd%%;          %%;@%%;'				" << std::endl;
		ofs << "                      `@%%:.  :;%%.         ;@@%%;'   				" << std::endl;
		ofs << "                        `@%%.  `;@%%.      ;@@%%;         			" << std::endl;
		ofs << "                          `@%%. `@%%    ;@@%%;        				" << std::endl;
		ofs << "                            ;@%%. :@%%  %%@@%%;       				" << std::endl;
		ofs << "                              %%@bd%%%%bd%%:;     				" << std::endl;
		ofs << "                                #@%%%%%%:;;							" << std::endl;
		ofs << "                                %%@@%%%%::;							" << std::endl;
		ofs << "                                %%@@@%%(o);  . '         			" << std::endl;
		ofs << "                                %%@@@o%%;:(.,'         				" << std::endl;
		ofs << "                            `.. %%@@@o%%::;         				" << std::endl;
		ofs << "                               `)@@@o%%::;         					" << std::endl;
		ofs << "                                %%@@(o)::;        					" << std::endl;
		ofs << "                               .%%@@@@%%::;         				" << std::endl;
		ofs << "                               ;%%@@@@%%::;.          				" << std::endl;
		ofs << "                              ;%%@@@@%%%%:;;;. 						" << std::endl;
		ofs << "                          ...;%%@@@@@%%%%:;;;;,.. 					" << std::endl;
		ofs.close();
	} catch (Form::GradeTooLowException &e) {
		std::cout << *this << " cannot make execution " << std::endl;
	}
}


