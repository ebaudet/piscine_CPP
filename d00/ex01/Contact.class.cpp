/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:18:59 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/05 22:21:49 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void) {
	
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::initContact() {
	this->_id = Contact::_nbContact;
	std::cout << "> What is the first name ?" << std::endl;
	std::cin >> this->_firstName;
	std::cout << "> What is the last name ?" << std::endl;
	std::cin >> this->_lastName;
	std::cout << "> What is the nickname ?" << std::endl;
	std::cin >> this->_nickName;
	std::cout << "> What is the login ?" << std::endl;
	std::cin >> this->_login;
	std::cout << "> What is the postal address ?" << std::endl;
	std::cin >> this->_postalAdress;
	std::cout << "> What is the email address ?" << std::endl;
	std::cin >> this->_email;
	std::cout << "> What is the phone number ?" << std::endl;
	std::cin >> this->_phone;
	std::cout << "> What is the birthday date ?" << std::endl;
	std::cin >> this->_birthday;
	std::cout << "> What is the favorite meal ?" << std::endl;
	std::cin >> this->_favoriteMeal;
	std::cout << "> What is the underwear color ?" << std::endl;
	std::cin >> this->_underwearColour;
	std::cout << "> What is the darkest secret ?" << std::endl;
	std::cin >> this->_darkestSecret;

	Contact::_nbContact += 1;
	return ;
}

int		Contact::getNbContact(void) {
	return Contact::_nbContact;
}

std::string		Contact::maxLengthString(std::string str) 
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	return str;
}


void	Contact::printShortContact(void) {
	std::cout << std::setw(10) << this->_id << "|" << std::setw(10) << Contact::maxLengthString(this->_firstName)
		<< "|" << std::setw(10) << Contact::maxLengthString(this->_lastName) << "|" << std::setw(10)
		<< Contact::maxLengthString(this->_nickName) << std::endl;
	return ;
}

void	Contact::printContact(void) {
	std::cout << this->_id << std::endl;
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postalAdress << std::endl;
	std::cout << this->_email << std::endl;
	std::cout << this->_phone << std::endl;
	std::cout << this->_birthday << std::endl;
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << this->_underwearColour << std::endl;
	std::cout << this->_darkestSecret << std::endl;

	return ;
}

int		Contact::_nbContact = 0;
