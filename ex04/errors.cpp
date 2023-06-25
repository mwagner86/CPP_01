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
