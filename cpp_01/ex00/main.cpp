#include "Zombie.hpp"

int main()
{
	Zombie z1(std::string("User1"));
	z1.announce();

	Zombie *z2 = newZombie(std::string("User2"));
	z2->announce();

	randomChump(std::string("User3"));

	delete z2;
	return 0;
}
