#include "Harl.hpp"

int	main() {
	Harl	Harl;

	std::cout << "\n";
	std::cout << RED <<"Harl" << DEFAULT << " is slightly agitated:\n";
	Harl.complain("INFO");
	std::cout << RED <<"Harl" << DEFAULT << " explains his wishes in a condescending way:\n";
	Harl.complain("DEBUG");
	std::cout << RED <<"Harl" << DEFAULT << " is getting angry:\n";
	Harl.complain("WARNING");
	std::cout << RED <<"Harl" << DEFAULT << " Now you've done it. " << RED <<"Harl" << DEFAULT << " is upset\n";
	Harl.complain("ERROR");

	return (0);
}
