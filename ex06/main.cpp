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
