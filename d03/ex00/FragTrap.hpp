// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ebaudet <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 18:28:22 by ebaudet           #+#    #+#             //
//   Updated: 2015/01/09 00:16:58 by ebaudet          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

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

public:
	FragTrap(void);
	FragTrap(const FragTrap &src);
	FragTrap(std::string name);
	~FragTrap(void);

	/* Methodes */
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	notice() const;
	void	vaulthunter_dot_exe(std::string const & target);

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
	FragTrap &operator=(FragTrap const &rhs);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs);

#endif
