//
// Created by max on 6/25/23.
//

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

	void	complain(std::string level);

private:

	void	debug();
	void	info();
	void	warning();
	void	error();

};

#endif //EX05_HARL_HPP
