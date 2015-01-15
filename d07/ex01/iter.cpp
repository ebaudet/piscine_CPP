/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 21:37:56 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/15 00:22:51 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename ARRAY, typename LENGTH, typename FUNCTION>
void	iter(ARRAY *a, LENGTH l, FUNCTION (*f)(ARRAY *)) {
	LENGTH	cpt = 0;

	while (cpt < l)
	{
		f(&a[cpt]);
		cpt += 1;
	}
}

template <typename T>
void	ft_print(T *var) {
	std::cout << *var << std::endl;
}

template <typename T>
void	ft_double(T *var) {
	*var *= 2;
}

int		main() {
	int			tabint[10] = {9, 8, 7, 6, 5, -4, 3, 2, 1, 0};
	std::string	tabstring[4] = {"chevreuil", "pantalon", "suricate", "pignouf"};
	float		tabfloat[5] = {4.2f, 5.0f, -7.3f, 12.0345f, 8.0001f};
	
	std::cout << "iter<int, int, void>(tabint, 10, int);" << std::endl;
	iter<int, int, void>(tabint, 10, ft_print<int>);
	iter<int, int, void>(tabint, 10, ft_double<int>);
	std::cout << "****** reafichage *********" << std::endl;
	iter<int, int, void>(tabint, 10, ft_print<int>);

	std::cout << "iter<std::string, int, void>(tabstring, 4, ft_print);" << std::endl;
	iter<std::string, int, void>(tabstring, 4, ft_print<std::string>);

	std::cout << "iter<float, int, void>(tabfloat, 5, ft_print);" << std::endl;
	iter<float, int, void>(tabfloat, 5, ft_print<float>);
	iter<float, int, void>(tabfloat, 5, ft_double<float>);
	std::cout << "****** reafichage *********" << std::endl;
	iter<float, int, void>(tabfloat, 5, ft_print<float>);

	return 0;
}
