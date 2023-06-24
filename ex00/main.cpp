/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:41:36 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/24 17:41:37 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie *Foo;
	Zombie *Bar;

	Foo = newZombie("Foo");
	Bar = newZombie("Bar");
	Foo->announce();
	Bar->announce();

	randomChump("Hershel");
	randomChump("Shane");

	delete(Foo);
	delete(Bar);

	randomChump("Merle");

	return (0);
}