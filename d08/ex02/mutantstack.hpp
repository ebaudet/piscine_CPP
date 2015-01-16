/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 01:24:23 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/16 03:47:15 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>(void);
	MutantStack<T>(MutantStack<T> const &);
	MutantStack<T>& operator=(MutantStack<T> const &);
	~MutantStack<T>(void);
	
	class iterator : public std::iterator<std::input_iterator_tag, T>
	{
	private:
		iterator& operator=(iterator const &);

	public:
		int		*p;

		// Constructors & Destructors
		iterator(void);
		iterator(int *);
		iterator(iterator const &);
		~iterator(void);

		// overload operators
		iterator&	operator++(void);
		iterator	operator++(int);
		iterator&	operator--(void);
		iterator	operator--(int);
		bool		operator==(const iterator& rhs);
		bool		operator!=(const iterator& rhs);
		int&		operator*(void);
	};

	iterator	begin(void);
	iterator	end(void);
};

#include "mutantstack.cpp"

#endif
