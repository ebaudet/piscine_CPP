/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 03:49:35 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 05:10:41 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	
public:
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm(std::string const);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &);
	~RobotomyRequestForm();

	// member functions
	void		execute(Bureaucrat const& executor) const;
};


#endif
