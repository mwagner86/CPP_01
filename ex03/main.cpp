/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:54:25 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:54:27 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		std::cout << "Round 1" << std::endl;
		Weapon knife = Weapon("Rusty Shiv");

		HumanA CharHero("John Wick", knife);

		CharHero.attack();
		knife.setType("Combat Knife");
		CharHero.attack();
		std::cout << "All Bad Guys are dead\n" << std::endl;
	}
	{
		std::cout << "Round 2" << std::endl;
		Weapon sword = Weapon("cheap Katana");
		HumanB CharHeroine("TheBride");
		HumanB CharVillain("Bill", &sword);
		CharVillain.attack();
		CharHeroine.attack();
		CharVillain.attack();
		CharHeroine.setWeapon(sword);
		sword.setType("Hotari Hanso Katana");
		CharHeroine.attack();
		std::cout << "Bill dies\n" << std::endl;
	}

	return 0;
}
