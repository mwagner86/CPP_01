/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:55:51 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:57:13 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#define DEFAULT "\033[0;39m"
#define RED "\033[1;31m"
#define GREEN "\033[32m"

#pragma once
#include <iostream>


class Weapon {

public:
	Weapon(std::string type);
	~Weapon();

	const	std::string &getType();
	void	setType(std::string type);

private:
	std::string _type;
};

#endif //EX03_WEAPON_HPP
