#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon knife = Weapon("Rusty Shiv");

		HumanA bob("Bob", knife);
		bob.attack();
		knife.setType("Combat Knife");
		bob.attack();
	}
	{
		Weapon sword = Weapon("Zweihaender Sword");

		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(sword);
		jim.attack();
		sword.setType("Katana");
		jim.attack();
	}

	return 0;
}
