/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 03:58:42 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 04:29:01 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);

		void			announce();
		std::string		getType();
		void			setType(std::string type);
		std::string		getName();
		void			setName(std::string name);

	private:
		std::string		_type;
		std::string		_name;
};

#endif
