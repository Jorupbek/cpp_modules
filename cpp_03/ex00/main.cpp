#include "ClapTrap.hpp"

int main()
{
	ClapTrap hero("Subzero");
	ClapTrap second_hero = hero;

	second_hero.attack("Subzero");
	second_hero.takeDamage(7);
	second_hero.beRepaired(4);

	hero.takeDamage(1);
}