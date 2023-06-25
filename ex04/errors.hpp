#ifndef ERRORS_HPP
# define ERRORS_HPP

# include <iostream>
#define DEFAULT "\033[0;39m"
#define RED "\033[1;31m"

void	error_args();
void	error_infile(const std::string& filename);
void	error_outfile(const std::string& filename);

#endif