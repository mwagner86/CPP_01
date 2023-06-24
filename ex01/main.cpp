/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:44:57 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:45:01 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	int amount = 15;
	Zombie *horde;
	horde = zombieHorde(amount, "Walker");

	for (int i = 0; i < amount; i++) {
		std::cout << "No " << i << " ";
		horde[i].announce();
	}
	delete [] horde;
}
