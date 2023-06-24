//
// Created by max on 6/24/23.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	// empty Constructor body
}

HumanA::~HumanA() {
	// empty Destructor body
}

void HumanA::attack() const {
	std::cout << GREEN << this->_name << DEFAULT;
	std::cout << " attacks with ";
	std::cout << RED << this->_weapon.getType() << DEFAULT;
	std::cout << "." << std::endl;
}