/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 06:35:04 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/13 06:40:14 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class Intern {

private:
	Intern(Intern const & src);
	Intern &	operator=(Intern const & rhs);

public:
	Intern();
	~Intern();

	Form *	makeForm(std::string const, std::string const);
};

#endif