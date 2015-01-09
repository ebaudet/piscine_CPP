/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 18:28:22 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 05:48:54 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap(void);
	FragTrap(const FragTrap &src);
	FragTrap(std::string name);
	~FragTrap(void);

	/* Methodes */
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs);

#endif
