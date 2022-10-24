/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:05:06 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/24 09:30:41 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	/* explicit instanciation */
	
	{
		int	a = 42;
		int	b = 7;
		int	c;
		std::string s;
		std::string	s1 = "Coucou";
		std::string	s2 = "Salut";


		std::cout << "max = " << ::max<int>(c, b) << std::endl;
		std::cout << "min = " << ::min<int>(c, b) << std::endl;
		std::cout << a << ", " << b <<std::endl << "Swapi-swap!" << std::endl;
		::swap(a , c);
		std::cout << a << ", " << b <<std::endl;
		std::cout << "max = " << ::max<std::string>(s, s2) << std::endl;
		std::cout << "min = " << ::min<std::string>(s, s2) << std::endl;
		std::cout << s1 << ", " << s2 <<std::endl;
		::swap(s1 , s);
		std::cout << s1 << ", " << s2 <<std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}
