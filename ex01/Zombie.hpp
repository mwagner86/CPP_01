/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:45:31 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:46:04 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();

	void 		announce();
	void 		set_name(std::string);
	static int	total;

private:
	std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif //EX00_ZOMBIE_HPP
