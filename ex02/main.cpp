/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:46:46 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:46:55 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEFAULT "\033[0;39m"
#define RED "\033[1;31m"
#define GREEN "\033[32m"

int	main()
{
	std::string str_var = "HI THIS IS BRAIN";
	std::string *stringPTR = &str_var;
	std::string &stringREF = str_var;

	std::cout << std::endl;
	std::cout << "Memory Address: " << std::endl;
	std::cout << RED << "The memory address of the string variable: " << DEFAULT << "str_var = " << GREEN << &str_var << std::endl;
	std::cout << RED << "The memory address held by: " << DEFAULT << "*stringPTR = " << GREEN << stringPTR  <<  std::endl;
	std::cout << RED << "The memory address held by: " << DEFAULT "&stringREF = " << GREEN << &stringREF  << DEFAULT << std::endl;
	std::cout << std::endl;
	std::cout << "Variable Value: " << std::endl;
	std::cout << RED << "The value of the string variable: " << DEFAULT << "str_var = " << GREEN << str_var << std::endl;
	std::cout << RED << "The value pointed to by: " << DEFAULT << "*stringPTR = " << GREEN << *stringPTR << std::endl;
	std::cout << RED << "The value pointed to by: " << DEFAULT << "&stringREF = " << GREEN << stringREF  << DEFAULT << std::endl;
	std::cout << std::endl;
}
