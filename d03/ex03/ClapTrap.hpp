/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:12:07 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/09 05:48:27 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
	static bool		_rand;
	static int		random();
		ClapTrap(std::string name,
		unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints,
		unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage,
		unsigned int rangedAttackDamage, unsigned int armorDamageReduction);

public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &src);
	ClapTrap(std::string name);
	~ClapTrap(void);

	/* Methodes */
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	notice() const;

	/* Accessors */
	unsigned int	getHitPoints(void) const;
	unsigned int	getMaxHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getMaxEnergyPoints(void) const;
	unsigned int	getLevel(void) const;
	std::string		getName(void) const;
	unsigned int	getMeleeAttackDamage(void) const;
	unsigned int	getRangedAttackDamage(void) const;
	unsigned int	getArmorDamageReduction(void) const;

	/* Mutators */
	bool	setHitPoints(unsigned int hitPoints);
	bool	setMaxHitPoints(unsigned int maxHitPoints);
	bool	setEnergyPoints(unsigned int energyPoints);
	bool	setMaxEnergyPoints(unsigned int maxEnergyPoints);
	bool	setLevel(unsigned int level);
	bool	setName(std::string name);
	bool	setMeleeAttackDamage(unsigned int meleeAttackDamage);
	bool	setRangedAttackDamage(unsigned int rangedAttackDamage);
	bool	setArmorDamageReduction(unsigned int armorDamageReduction);

	/* Operator Overload */
	ClapTrap &operator=(ClapTrap const &rhs);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);

#endif
