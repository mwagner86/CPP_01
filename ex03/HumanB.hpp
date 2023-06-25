/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:54:18 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:54:20 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon * weapon_type);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon_type);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif //EX03_HUMANB_HPP
