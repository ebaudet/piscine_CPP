/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 03:49:04 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 05:11:10 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm(std::string const);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();

	// member functions
	void		execute(Bureaucrat const& executor) const;
};


#endif
