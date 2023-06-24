#include "Zombie.hpp"

// Local Scope: only accessible within this function
// exist only as long as the function is executing.
// Memory allocation on Stack
void randomChump(std::string name) {
	Zombie	randomC;
	randomC.set_name(name);
	randomC.announce();
}
