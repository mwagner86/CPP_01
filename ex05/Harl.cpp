//
// Created by max on 6/25/23.
//

#include "Harl.hpp"

Harl::Harl() {
	std::cout << RED << "Harl" << DEFAULT << " approaches with heavy footsteps\n";
}

void	Harl::complain(std::string level)
{
	std::string const change_lvl[4] = {"DEBUG",
									   "INFO",
									   "WARNING",
									   "ERROR"};
	void	(Harl::*set[4])(void) = {&Harl::debug,
									&Harl::info,
									&Harl::warning,
									&Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == change_lvl[i])
			(this->*set[i])();
	}
}

Harl::~Harl() {
	std::cout << RED << "Harl" << DEFAULT <<" finally gives up and decides to leave\n";
}

void	Harl::debug()
{
	std::cout	<< BOLD << "'DEBUG' level:\n" << DEFAULT
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout	<< BOLD << "'INFO' level:\n" << DEFAULT
				<< "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!\n" << std::endl;

}

void	Harl::warning()
{
	std::cout	<< BOLD << "'WARNING' level:\n" << DEFAULT
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout	<< BOLD << "'ERROR' level:\n" << DEFAULT
				<< "This is unacceptable! I want to speak to the manager now.\n"
				<< std::endl;
}