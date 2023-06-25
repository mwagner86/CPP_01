/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:34:46 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/25 17:34:49 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_HARL_HPP
#define EX05_HARL_HPP
#define BOLD 	"\033[1m"
#define DEFAULT "\033[0m"
#define RED 	"\033[31m"
#include <iostream>
#include <string>

class Harl {

public:

	Harl();
	~Harl();

	static void	complain(std::string level);

private:

	static void	debug();
	static void	info();
	static void	warning();
	static void	error();

};

#endif //EX05_HARL_HPP
