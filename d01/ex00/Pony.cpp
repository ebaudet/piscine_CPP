/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 02:26:22 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 03:10:40 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int sex, std::string name) : _sex(sex), _name(name) {
	std::cout << "construct the Pony " << this->_name << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << "destruct the Pony " << this->_name << std::endl;
	return ;
}

void	Pony::print(void) {
	if (_sex == 0)
		std::cout << "Pony " << this->_name << " is a female" << std::endl;
	else if (_sex == 1)
		std::cout << "Pony " << this->_name << " is a male" << std::endl;
	else
		std::cout << "Pony " << this->_name << " is a unknow" << std::endl;
}
