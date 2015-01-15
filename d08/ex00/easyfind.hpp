/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:53:48 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/15 21:23:27 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void	easyfind(T container, int search) {
	typename T::iterator it;

	it = find(container.begin(), container.end(), search);
	if (it != container.end())
		std::cout << "Element found in my container : " << *it << std::endl;
	else
		throw std::exception();
}

#endif
