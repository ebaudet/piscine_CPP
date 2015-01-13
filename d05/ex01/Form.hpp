/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 21:58:36 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 03:08:06 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string		_name;
	const int				_gradeToSign;
	const int				_gradeToExecute;
	bool					_sign;


public:
	Form();
	Form(std::string const, int const, int const);
	Form(Form const &);
	Form& operator=(Form const &);
	~Form();

	// accessors & mutators
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;
	std::string	getName(void) const;
	bool		getSign(void) const;
	bool		setSign(bool sign);

	// member functions
	void		beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const &) throw();
		GradeTooHighException& operator=(GradeTooHighException const &) throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &) throw();
		GradeTooLowException& operator=(GradeTooLowException const &) throw();
		~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};
};
std::ostream &operator<<(std::ostream &o, const Form&);

#endif
