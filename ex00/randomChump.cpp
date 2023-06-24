/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:42:01 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:42:09 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Local Scope: only accessible within this function
// exist only as long as the function is executing.
// Memory allocation on Stack

void	randomChump(std::string name) {
	Zombie	randomC;
	randomC.set_name(name);
	randomC.announce();
}
