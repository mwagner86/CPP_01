/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:51:50 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:57:49 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	// empty Constructor body
}

HumanA::~HumanA() {
	// empty Destructor body
}

void	HumanA::attack() const {
	std::cout << GREEN << this->_name << DEFAULT;
	std::cout << " attacks with their ";
	std::cout << RED << this->_weapon.getType() << DEFAULT;
	std::cout << "." << std::endl;
}
