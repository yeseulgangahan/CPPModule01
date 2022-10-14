#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

//1. While HumanA takes the Weapon in its constructor, HumanB doesn’t.
//2. HumanB may not always have a Weapon, whereas HumanA will always be armed.

int main() {
	{
		std::cout << "\n   * ROUND 1 *   " << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);//now "bob" is the owner of the "club"
		bob.attack();
		club.setType("some other type of club");//upgrade weapon!
		bob.attack();
	}
	{
		std::cout << "\n   * ROUND 2 *   " << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);//now "jim" is the owner of the "club"
		jim.attack();
		club.setType("some other type of club");//upgrade weapon!
		jim.attack();
	}
	return 0;
}

//