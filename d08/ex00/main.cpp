/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:20:09 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/15 21:33:44 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

template <typename T>
void	ft_printContainer(T &v) {
	for (typename T::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
}

int main(void)
{
	/*
		Avec Vector :
	*/
	std::cout << "************** Vector ************" << std::endl;
	
	std::vector<int> v;

	std::cout << "content of v : " << std::endl;
	ft_printContainer(v);
	std::vector<int>::iterator it;
	it = v.begin();
	it = v.insert(it, 12);
	it = v.insert(it, 5);
	it = v.insert(it, 78);
	it = v.insert(it, 19);
	it = v.insert(it, 4);
	it = v.insert(it, -4);

	v.insert(v.begin(), 1, 42);
	it = v.begin();
	v.insert(it, 1, 13);
	v.insert(v.end(), 1, 42);
	std::cout << "content of v : " << std::endl;
	ft_printContainer(v);
	try {
		std::cout << "find 15 :" << std::endl;
		easyfind(v, 15);
		std::cout << "Value find" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "find 42" << std::endl;
		easyfind(v, 42);
		std::cout << "Value find" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	/*
		Avec deque :
	*/
	std::cout << "************** Deque ************" << std::endl;

	std::deque<int> d;

	std::cout << "content of d : " << std::endl;
	ft_printContainer(d);
	std::deque<int>::iterator itd;
	itd = d.begin();
	itd = d.insert(itd, 12);
	itd = d.insert(itd, 5);
	itd = d.insert(itd, 78);
	itd = d.insert(itd, 19);
	itd = d.insert(itd, 4);
	itd = d.insert(itd, -4);

	d.insert(d.begin(), 1, 42);
	itd = d.begin();
	d.insert(itd, 1, 13);
	d.insert(d.end(), 1, 42);
	std::cout << "content of d : " << std::endl;
	ft_printContainer(d);
	try {
		std::cout << "find 15 :" << std::endl;
		easyfind(d, 15);
		std::cout << "Value find" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "find -4" << std::endl;
		easyfind(d, -4);
		std::cout << "Value find" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	/*
		Avec list :
	*/
	std::cout << "************** List ************" << std::endl;

	std::list<int> l;

	std::cout << "content of l : " << std::endl;
	ft_printContainer(l);
	std::list<int>::iterator itl;
	itl = l.begin();
	itl = l.insert(itl, 12);
	itl = l.insert(itl, 5);
	itl = l.insert(itl, 78);
	itl = l.insert(itl, 19);
	itl = l.insert(itl, 4);
	itl = l.insert(itl, -4);

	l.insert(l.begin(), 1, 42);
	itl = l.begin();
	l.insert(itl, 1, 13);
	l.insert(l.end(), 1, 42);
	std::cout << "content of l : " << std::endl;
	ft_printContainer(l);
	try {
		std::cout << "find 15 :" << std::endl;
		easyfind(l, 15);
		std::cout << "Value find" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "find 78" << std::endl;
		easyfind(l, 78);
		std::cout << "Value find" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}