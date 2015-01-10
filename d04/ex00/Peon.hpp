/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 02:38:30 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/10 04:18:55 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

private:
	Peon(void);

public:
	Peon(const Peon &src);
	Peon(std::string name);
	~Peon(void);

	/* Method */
	virtual void	getPolymorphed() const;

	/* Accessors */
	std::string		getName(void) const;

	/* Mutators */
	bool			setName(std::string name);

	/* Operator Overload */
	Peon &operator=(Peon const &rhs);
};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif
