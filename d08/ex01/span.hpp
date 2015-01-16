/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 21:44:26 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 01:09:21 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

class Span
{
private:
	unsigned int		_size;
	std::vector<int>	_container;

	// private functions
	int					abs_diff(int const, int const);

public:
	Span(void);
	Span(unsigned int const);
	Span(Span const &);
	Span& operator=(Span const &);
	~Span(void);

	// member functions
	void	addNumber(int const);
	int		shortestSpan(void);
	int		longestSpan(void);
	template <typename T>
	void	addRange(T container) {
		for_each(container.begin(), container.end(), std::bind1st(std::mem_fun(&Span::addNumber), this));
	}

	// getters & setters
	unsigned int		getSize(void) const;
	std::vector<int>	getContainer(void) const;

};


#endif
