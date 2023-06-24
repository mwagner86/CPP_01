#include "Zombie.hpp"

int main() {

	int amount = 15;
	Zombie *horde;
	horde = zombieHorde(amount, "Walker");

	for (int i = 0; i < amount; i++) {
		std::cout << "No " << i << " ";
		horde[i].announce();
	}
	delete [] horde;
}