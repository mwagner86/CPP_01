//
// Created by max on 6/24/23.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#define DEFAULT "\033[0;39m"
#define RED "\033[1;31m"
#define GREEN "\033[32m"

#include <iostream>


class Weapon {

public:
	explicit Weapon(std::string type);
	~Weapon();

	const	std::string &getType();
	void	setType(std::string type);

private:
	std::string _type;
};

#endif //EX03_WEAPON_HPP
