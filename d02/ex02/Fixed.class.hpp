/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 20:41:00 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/08 05:12:53 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const fixed);
		Fixed(float const fixed);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed&	operator= (Fixed const &rhs);
		Fixed	operator+ (Fixed const &rhs) const;
		Fixed&	operator++ ();
		Fixed	operator++ (int);
		Fixed&	operator-- ();
		Fixed	operator-- (int);
		Fixed	operator- (Fixed const &rhs) const;
		Fixed	operator* (Fixed const &rhs) const;
		Fixed	operator/ (Fixed const &rhs) const;

		bool	operator> (Fixed const &f) const;
		bool	operator< (Fixed const &f) const;
		bool	operator<= (Fixed const &f) const;
		bool	operator>= (Fixed const &f) const;
		bool	operator== (Fixed const &f) const;
		bool	operator!= (Fixed const &f) const;

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	min(Fixed f1, Fixed f2); //non membre
		static Fixed	max(Fixed f1, Fixed f2); //non membre

	private:
		int		_rawBits;
		int		const _nbBits;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
