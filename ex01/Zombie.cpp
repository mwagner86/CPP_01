/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:45:15 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:45:21 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie() {
	// Constructor Body
	// std::cout << "Zombie Constructor called : " << std::endl;
	total++;
};

// Destructor
Zombie::~Zombie() {
	// Destructor Body
	std::cout << "Zombie Destructor called : " << this->_name << std::endl;
}

int Zombie::total = 0;

// Setter function for name to protect private var: _name
void	Zombie::set_name(std::string name) {
	this->_name = name;
}

void	Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
