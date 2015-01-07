/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 02:26:22 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/07 02:56:33 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

	public:
		Pony(int sex, std::string name);
		~Pony(void);

		void	print(void);

	private:
		int				_sex;
		std::string		_name;
};

#endif
