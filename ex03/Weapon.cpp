//
// Created by max on 6/24/23.
//

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
	// empty Destructor Body
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
const std::string &Weapon::getType() {
	return (this->_type);
};