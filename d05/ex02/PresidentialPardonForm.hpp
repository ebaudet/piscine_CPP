/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 03:49:44 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 05:08:12 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	
public:
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm(std::string const);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm();

	// member functions
	void		execute(Bureaucrat const& executor) const;
};

#endif
