/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 01:24:23 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 03:41:21 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int		main(){

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(12);
	mstack.push(42);
	mstack.push(5);
	mstack.push(-16);
	mstack.push(351);
	mstack.push(100001);
	mstack.push(101010);
	mstack.push(1120);
	mstack.push(132);
	mstack.push(52);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << *ite << " TEST" << std::endl;

	++it;
	--it;
	std::cout << *it << " (before loop)" << std::endl; 
	while (it != ite)
	{
		std::cout << *it << " (loop)" << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "=======================================" << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;

	lst.pop_back();

	std::cout << lst.size() << std::endl;
	
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(12);
	lst.push_back(42);
	lst.push_back(5);
	lst.push_back(-16);
	lst.push_back(351);
	lst.push_back(100001);
	lst.push_back(101010);
	lst.push_back(1120);
	lst.push_back(132);
	lst.push_back(52);
	lst.push_back(0);

	std::list<int>::iterator itLST = lst.begin();
	std::list<int>::iterator iteLST = lst.end();

	std::cout << *ite << " TEST 2" << std::endl;

	++itLST;
	--itLST;
	std::cout << *itLST << " (before loop)" << std::endl;
	while (itLST != iteLST)
	{
		std::cout << *itLST << " (loop)" << std::endl;
		++itLST;
	}
	return 0;
}