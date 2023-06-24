//
// Created by max on 6/24/23.
//

#pragma once
#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();

	void announce();
	void set_name(std::string);

private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif //EX00_ZOMBIE_HPP
