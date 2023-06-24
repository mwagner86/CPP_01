//
// Created by max on 6/24/23.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);
	void attack() const;
	~HumanA();

private:
	std::string	_name;
	Weapon	&_weapon;
};


#endif //EX03_HUMANA_HPP
