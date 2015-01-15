/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 00:19:02 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/15 01:58:36 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void) {
	Array<int> test(2);
	Array<std::string> teststing(2);

	test[0] = 42;
	test[1] = 21;
	int i = test[0];
	int j = test[1];
	std::cout << "test[0] : " << i << " , test[1] : " << j << std::endl;

	teststing[0] = "coucou";
	teststing[1] = "toto";
	std::cout << "teststing[0] : " << teststing[0] << " , teststing[1] : " << teststing[1] << std::endl;
	return 0;
}
