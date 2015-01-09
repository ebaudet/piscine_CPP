/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 03:58:56 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 05:49:20 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap(void);
	NinjaTrap(const NinjaTrap &src);
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	/* Methodes */
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	ninjaShoebox(ClapTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
};

std::ostream & operator<<(std::ostream & o, NinjaTrap const & rhs);

#endif
