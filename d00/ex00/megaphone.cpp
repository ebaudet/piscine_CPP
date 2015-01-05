/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 15:12:20 by ebaudet           #+#    #+#             */
/*   Updated: 2015/01/05 16:23:22 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printUpper(const char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			std::cout << (char)(s[i] - 'a' + 'A');
		}
		else
		{
			std::cout << s[i];
		}
	}
}

int		main(const int argc, const char **argv)
{
	int		i = 1;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (i < argc)
		{
			printUpper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}

	return (0);
}
