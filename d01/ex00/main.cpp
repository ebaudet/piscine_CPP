/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 02:26:22 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 03:11:57 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony*  		pony = new Pony(1, "Gerome the heap");

	pony->print();
	delete pony;
	std::cout << "last line of ponyOnTheHeap()" << std::endl;
}

void	ponyOnTheStack(void) {
	Pony		pony = Pony(0, "Geraldine the stack");

	pony.print();
	std::cout << "last line of ponyOnTheStack()" << std::endl;
}

int		main(void)
{
	std::cout << "call ponyOnTheHeap()" << std::endl;
	ponyOnTheHeap();

	std::cout << std::endl << "call ponyOnTheStack()" << std::endl;
	ponyOnTheStack();

	return 0;
}