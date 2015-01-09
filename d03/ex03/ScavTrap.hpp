/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 01:26:14 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 03:45:08 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	ScavTrap(void);

public:
	ScavTrap(const ScavTrap &src);
	ScavTrap(std::string name);
	~ScavTrap(void);

	/* Methodes */
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	challengeNewcomer(std::string const & target);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs);

#endif
