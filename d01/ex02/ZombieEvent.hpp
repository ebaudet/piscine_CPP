/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 03:58:42 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 04:51:35 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {

	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void			setZombieType(std::string type);
		Zombie 			*newZombie(std::string name);

	private:
		std::string		_type;
};

#endif
