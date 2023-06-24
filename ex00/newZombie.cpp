#include "Zombie.hpp"

// Global Scope: accessible from anywhere in the program
// including all functions and blocks within the program.
// global lifetime and can be accessed throughout the entire execution of the program.
// Memory allocation with new -> heap. Needs to be destroyed afterwards.
Zombie *newZombie(std::string name) {
	Zombie *new_zombie;
	new_zombie = new Zombie();
	new_zombie->set_name(name);
	return (new_zombie);
}
