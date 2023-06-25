/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:26:54 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/25 17:27:18 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "errors.hpp"

void	error_args() {
	std::cout 	<< RED
				<< "Error!\n" << DEFAULT
				<< "Program requires 3 arguments\n"
				<< "<filename> <search> <replace>\n";
	exit(-1);
}

void	error_infile(const std::string& filename) {
	std::cout	<< RED
				<< "Error!\n" << DEFAULT
				<< "Could not open infile " << filename << std::endl;
	exit(-1);
}

void	error_outfile(const std::string& filename) {
	std::cout	<< RED
				<< "Error!\n" << DEFAULT
				<< "Could not open outfile " << filename << std::endl;
	exit(-1);
}
