/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:34:57 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/25 17:34:58 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[]) {

	if (argc == 1)
	{
		std::cout << "enter <level> or <complaint>\n";
		return (-1);
	}
	Harl	Harl;
	Harl.complain(argv[1]);
	return (0);
}
