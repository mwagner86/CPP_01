/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:42:53 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:43:18 by mwagner          ###   ########.fr       */
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

	void announce();
	void set_name(std::string);

private:
	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif //EX00_ZOMBIE_HPP
