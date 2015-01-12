/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 21:58:36 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/12 23:32:24 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Form
{
private:
	const std::string		_name;
	const int				_gradeToSign;
	const int				_gradeToExecute;
	bool					_sign;


public:
	Form();
	Form(Form const &);
	Form& operator=(Form const &);
	~Form();

	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;
	std::string	getName(void) const;
	bool		getSign(void) const;
	bool		setSign(bool sign);

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
