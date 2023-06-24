//
// Created by max on 6/24/23.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon_type);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif //EX03_HUMANB_HPP
