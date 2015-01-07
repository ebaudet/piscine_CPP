/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 02:18:47 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 02:24:07 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string		varString = "HI THIS IS BRAIN";

	std::string* 	varPtr = &varString;
	std::string&	varRef = varString;

	std::cout << *varPtr << std::endl;
	std::cout << varRef << std::endl;

	return 0;
}