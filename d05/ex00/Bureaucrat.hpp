/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/12 22:28:06 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat& operator=(Bureaucrat const &);
	~Bureaucrat();

	bool		setGrade(int grade);
	int			getGrade(void) const;
	std::string	getName(void) const;


	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() throw();
		GradeTooHighException(Bureaucrat::GradeTooHighException const &) throw();
		Bureaucrat::GradeTooHighException& operator=(Bureaucrat::GradeTooHighException const &) throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		GradeTooLowException(Bureaucrat::GradeTooLowException const &) throw();
		Bureaucrat::GradeTooLowException& operator=(Bureaucrat::GradeTooLowException const &) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};
	
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat&);

#endif
