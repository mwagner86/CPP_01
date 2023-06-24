#include "Zombie.hpp"

int	main() {

	Zombie *Foo;
	Zombie *Bar;

	Foo = newZombie("Foo");
	Bar = newZombie("Bar");
	Foo->announce();
	Bar->announce();

	randomChump("Hershel");
	randomChump("Shane");

	delete(Foo);
	delete(Bar);

	randomChump("Merle");

	return (0);
}