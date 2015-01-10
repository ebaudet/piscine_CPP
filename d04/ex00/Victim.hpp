/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 02:38:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/10 04:31:01 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

protected:
	std::string _name;
	Victim(void);

public:
	Victim(const Victim &src);
	Victim(std::string name);
	virtual ~Victim(void);

	/* Method */
	virtual void	getPolymorphed() const;

	/* Accessors */
	std::string		getName(void) const;

	/* Mutators */
	bool			setName(std::string name);

	/* Operator Overload */
	Victim &operator=(Victim const &rhs);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
