/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 02:38:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/10 03:59:42 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

private:
	std::string _name;
	std::string _title;
	Sorcerer(void);

public:
	Sorcerer(const Sorcerer &src);
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);

	/* member function */
	void			polymorph(Victim const &victim) const;

	/* Accessors */
	std::string		getName(void) const;
	std::string		getTitle(void) const;

	/* Mutators */
	bool			setName(std::string name);
	bool			setTitle(std::string title);

	/* Operator Overload */
	Sorcerer &operator=(Sorcerer const &rhs);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
