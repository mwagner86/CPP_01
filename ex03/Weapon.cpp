/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:54:44 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:57:04 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
