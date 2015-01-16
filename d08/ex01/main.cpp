/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 21:44:26 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 01:23:26 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cstdlib>


int genRandomInt(void) { return ((std::rand() % 100000) - 50000); }

template <typename T>
void	ft_printContainer(T const &v) {
	T	copy = const_cast<T&>(v);

	for (typename T::iterator it = copy.begin(); it != copy.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
}

int main()
{
	try{
		std::cout << "****************** test 0 : main donné ******************" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span sp2 = sp;
		std::cout << "liste sp avant recherche : " << std::endl;
		ft_printContainer(sp.getContainer());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "liste sp après recherche : " << std::endl;
		ft_printContainer(sp.getContainer());

		std::cout << "****************** test 1 : cas avec 10 000 éléments ******************" << std::endl;

		std::srand(time(NULL));
		std::vector<int> gen(10000);
		std::generate(gen.begin(), gen.end(), genRandomInt);

		Span test = Span(10000);
		test.addRange(gen);

		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "****************** test 2 : trop d'ajout ******************" << std::endl;
		
		Span test2 = Span(2);

		test2.addNumber(5);
		test2.addNumber(3);
		test2.addNumber(17);
		std::cout << "tous les ajouts se sont bien passés" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Erreur d'ajout : " << e.what() << std::endl;
	}

	return 0;
}
