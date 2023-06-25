/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:31:39 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/25 17:36:09 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << RED << "Harl" << DEFAULT << " approaches with heavy footsteps\n" << std::endl;
}

Harl::~Harl() {
	std::cout << RED << "Harl" << DEFAULT <<" finally gives up and decides to leave\n" << std::endl;
}

void	Harl::complain(std::string level) {
	std::string const change_lvl[4] = {"DEBUG",
									   "INFO",
									   "WARNING",
									   "ERROR"};
	int complaint = -1;

	for (int i = 0; i < 4; i++) {
		if (level == change_lvl[i]) {
			complaint = i;
			break;
		}
	}
	switch (complaint) {
		case 0:
			Harl::debug();
					__attribute__ ((fallthrough));
		case 1:
			Harl::info();
					__attribute__ ((fallthrough));
		case 2:
			Harl::warning();
					__attribute__ ((fallthrough));
		case 3:
			Harl::error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			break;
	}
}

void	Harl::debug()
{
	std::cout	<< BOLD << "[DEBUG level]\n" << DEFAULT
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout	<< BOLD << "[INFO level]\n" << DEFAULT
				<< "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!\n" << std::endl;

}

void	Harl::warning()
{
	std::cout	<< BOLD << "[WARNING' level]\n" << DEFAULT
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I’ve been coming for years whereas you "
				<< "started working here since last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout	<< BOLD << "[ERROR' level]\n" << DEFAULT
				<< "This is unacceptable!\n"
				<< "I want to speak to the manager now.\n"
				<< std::endl;
}
