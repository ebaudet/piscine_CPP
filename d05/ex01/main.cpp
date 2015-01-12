/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:47:43 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/12 23:10:12 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int 	main()
{
	Bureaucrat jacques("Jacques", 2000);
	Bureaucrat sylvain("Sylvain", 90);

	std::cout << "jacques : " << jacques << std::endl;
	std::cout << "sylvain : " << sylvain << std::endl;
	
	jacques.setGrade(12);
	sylvain.setGrade(0);

	std::cout << "jacques : " << jacques << std::endl;
	std::cout << "sylvain : " << sylvain << std::endl;

	jacques.setGrade(20);
	sylvain.setGrade(159);
	
	std::cout << "jacques : " << jacques << std::endl;
	std::cout << "sylvain : " << sylvain << std::endl;

	jacques.setGrade(5);
	sylvain.setGrade(13);
	
	std::cout << "jacques : " << jacques << std::endl;
	std::cout << "sylvain : " << sylvain << std::endl;
	return 0;
}
