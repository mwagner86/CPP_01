/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:53:37 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:53:40 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::HumanB(std::string name, Weapon * weapon_type) : _name(name), _weapon(weapon_type)
{

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
