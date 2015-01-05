/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:19:01 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/05 20:53:18 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact {

public:
	Contact(void);
	~Contact(void);
	static int		getNbContact(void);
	void	initContact();
	void	printContact(void);
	void	printShortContact(void);


private:
	static int		_nbContact;
	int				_id;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_login;
	std::string		_postalAdress;
	std::string		_email;
	std::string		_phone;
	std::string		_birthday;
	std::string		_favoriteMeal;
	std::string		_underwearColour;
	std::string		_darkestSecret;
	std::string		maxLengthString(std::string str);

};

#endif
