//
// Created by max on 6/24/23.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
	// empty Destructor Body
}

void	HumanB::setWeapon(Weapon &weapon_type) {
	this->_weapon = &weapon_type;
}

void	HumanB::attack() {
	std::cout << GREEN << this->_name << DEFAULT << " attacks with their ";
	if (_weapon) {
		std::cout << RED << _weapon->getType() << DEFAULT;
		std::cout << "." << std::endl;
	}
	else {
		std::cout << RED << "fists" << DEFAULT;
		std::cout << "." << std::endl;
	}
}
