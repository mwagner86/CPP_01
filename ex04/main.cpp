/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:27:37 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/25 17:28:20 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "errors.hpp"

std::string	get_content(std::ifstream &infile);

int main(int argc, char *argv[]) {
	if (argc != 4)
		error_args();
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	infile(filename.c_str());
	if (s1.empty() || s2.empty()) {
		std::cout << "Error: Replacement strings cannot be empty." << std::endl;
		exit(1);
	}
	// test: chmod 000 test.txt or choose wrong file name -> run again.
		if (infile.fail())
		error_infile(filename);
	std::string 	outfile_name = filename + ".replace";
	std::ofstream 	outfile(outfile_name.c_str());
	// test: chmod 444 test.txt.replace -> run again.
	if (outfile.fail())
		error_outfile(outfile_name);
	std::string tmp = get_content(infile);
	size_t	pos;
	do	{
		pos = tmp.find(s1);
		if (pos != std::string::npos)
		{
			tmp.erase(pos, s1.length());
			tmp.insert(pos, s2);
		}
	} while (pos != std::string::npos);
	outfile << tmp;
	outfile.close();

	return (0);
}

std::string	get_content(std::ifstream &infile)
{
	infile.seekg(0 , std::ifstream::end);
	long	length = infile.tellg();
	infile.seekg(0, std::ifstream::beg);
	char	*buffer = new char [length + 1];
	infile.read(buffer, length);
	buffer[length] = '\0';
	infile.close();
	std::string	tmp = buffer;
	delete [] buffer;
	return (tmp);
}
